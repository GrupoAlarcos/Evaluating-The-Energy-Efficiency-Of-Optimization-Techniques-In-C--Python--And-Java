REPS = 100000000

def divide(i, j):
    return i >> j

def test(i, j):
    return divide(i, j)

if __name__ == "__main__":
    dividend = 100000000
    exponent = 10
    for _ in range(REPS):
        test(dividend, exponent)