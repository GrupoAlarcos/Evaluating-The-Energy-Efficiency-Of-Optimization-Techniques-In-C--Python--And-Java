REPS = 100000000

def test(a, b):
    c = b or a
    d = a and b

if __name__ == "__main__":
    a = True
    b = False
    for _ in range(REPS):
        test(a, b)
