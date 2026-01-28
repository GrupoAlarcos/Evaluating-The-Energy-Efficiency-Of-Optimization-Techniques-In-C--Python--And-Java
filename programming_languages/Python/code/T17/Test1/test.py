REPS = 100000000

def multiply(i, j):
    return i * j

def test(i, j):
    multiply(i, j)

if __name__ == "__main__":
    factor1 = 100000000
    factor2 = 10
    for _ in range(REPS):
        test(factor1, factor2)
