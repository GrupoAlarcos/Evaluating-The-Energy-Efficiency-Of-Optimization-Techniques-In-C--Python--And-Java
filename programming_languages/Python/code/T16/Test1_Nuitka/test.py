REPS = 100000000

def divide(i, j):
    return i / j

def test(i, j):
    divide(i, j)

if __name__ == "__main__":
    dividend = 100000000
    exponent = 10
    divisor = pow(2, exponent)
    for _ in range(REPS):
        test(dividend, divisor)
