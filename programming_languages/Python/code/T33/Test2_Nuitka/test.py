REPS = 100000000

def functb(x):
    return x * 2

def funct(x):
    return functb(x - 1) - 8

def test(a):
    b = funct(a)

if __name__ == "__main__":
    for _ in range(REPS):
        test(1)
