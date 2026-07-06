import os
import Test1.test as file1
import Test2.test as file2

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
    factor1 = 100000000
    factor2 = 1024
    factor3 = 10

    result1 = file1.test(factor1, factor2)
    result2 = file2.test(factor1, factor3)

    for name, r in [("file1", result1), ("file2", result2)]:
        assert r is not None, f"{name}.test returned None!"
        assert isinstance(r, int), f"{name}.test should return a number, got {type(r)}"

    if not (result1 == result2):
            raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()