import os
import Test1.test as file1
import Test2.test as file2
from Test2.test import N, NBUF

files_to_compare = [
    ("Test1/test.py", "Test1_Nuitka/test.py"),
    ("Test2/test.py", "Test2_Nuitka/test.py")
]

def test_files_identical():
    for orig, nuitka in files_to_compare:
        assert os.path.exists(orig), f"Original file not found: {orig}"
        assert os.path.exists(nuitka), f"Nuitka file not found: {nuitka}"

        with open(orig, "r", encoding="utf-8") as f1:
            content1 = f1.read()
        with open(nuitka, "r", encoding="utf-8") as f2:
            content2 = f2.read()

        assert content1 == content2, f"Files differ: {orig} != {nuitka}"

def test_identical_output_check_all():
    array = ['a'] * N
    buf = ['a'] * NBUF

    generated_files = [
        "test1.txt",
        "test2.txt",
    ]

    with open("test1.txt", "w") as f: file1.test(array, f)
    with open("test2.txt", "w") as f: file2.test(array, buf, f)

    contents = []
    for filename in generated_files:
        with open(filename, "r", encoding="utf-8") as f:
            contents.append(f.read())

    if not len(set(contents)) == 1:
        raise AssertionError(f"Mismatch detected between versions!")
    
    for filename in generated_files:
        if os.path.exists(filename):
            os.remove(filename)

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()