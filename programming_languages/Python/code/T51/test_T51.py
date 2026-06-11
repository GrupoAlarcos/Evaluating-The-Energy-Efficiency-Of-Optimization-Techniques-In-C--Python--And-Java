import os
import random
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
    master_array = [random.randint(0, N - 1) for _ in range(N)]

    copy1 = list(master_array)
    copy2 = list(master_array)

    file1.test(copy1)
    file2.test(copy2)

    results = [copy1, copy2]
    names = ["File1", "File1_Nuitka", "File2", "File2_Nuitka"]

    for i, res in enumerate(results):
        if not (res == sorted(res)):
            raise AssertionError(f"Error: {names[i]} output is NOT sorted!")
        
    if not (copy1 == copy2):
            raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()