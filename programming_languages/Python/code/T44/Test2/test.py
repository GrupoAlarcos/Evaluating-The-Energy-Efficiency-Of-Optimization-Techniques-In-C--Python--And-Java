REPS = 100000000

def test(a, b):
    c = a or b
    d = b and a

if __name__ == "__main__":
    a = True
    b = False
    for _ in range(REPS):
        test(a, b)
