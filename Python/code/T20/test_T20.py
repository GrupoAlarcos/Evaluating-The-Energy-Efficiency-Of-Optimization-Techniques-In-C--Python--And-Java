import os
import Test1.test as file1
import Test2.test as file2
from Test1.test import N

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
    array = [0] * N
    copy1 = list(array)
    copy2 = list(array)
    file1.test(copy1)
    file2.test(copy2)

    if not (copy1 == copy2):
            raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()