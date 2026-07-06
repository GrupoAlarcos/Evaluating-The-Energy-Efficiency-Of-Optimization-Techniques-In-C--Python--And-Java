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
    random_index = random.randint(0, N - 1)
    random_value = random.randint(0, N - 1)
    array = [random_value if i == random_index else 0 for i in range(N)]
    result1 = file1.test(array, random_index)
    result2 = file2.test(array, random_index)

    for name, r in [("file1", result1), ("file2", result2),]:
        assert isinstance(r, int), f"{name}.test should return a number, got {type(r)}"

    if not (result1 == result2):
            raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()