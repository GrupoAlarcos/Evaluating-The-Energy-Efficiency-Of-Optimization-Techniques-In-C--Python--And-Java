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
    f, e, d, c = 4, 3, 2, 1
    lookup = [f, e, d, d, c, c, c, c]

    combinations = [(b1, b2, b3) for b1 in [0, 1] for b2 in [0, 1] for b3 in [0, 1]]
    
    for b1, b2, b3 in combinations:
        r1 = file1.test(b1, b2, b3, c, d, e, f, None)
        r2 = file2.test(b1, b2, b3, c, d, e, f, lookup)

        for name, r in [("file1", r1), ("file2", r2)]:
            assert isinstance(r, int), f"{name}.test should return a number, got {type(r)}"

        if not (r1 == r2):
            raise AssertionError(f"Mismatch detected between versions!")

if __name__ == "__main__":
    test_files_identical()
    test_identical_output_check_all()