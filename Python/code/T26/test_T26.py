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
    array1 = [0] * N
    array2 = [0] * N

    copy11 = list(array1)
    copy12 = list(array2)
    copy21 = list(array1)
    copy22 = list(array2)

    file1.test(copy11, copy12, N)
    file2.test(copy21, copy22, N)

    if not (copy11 == copy21):
        raise AssertionError(f"Mismatch detected between versions!")

    if not (copy12 == copy22):
        raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()