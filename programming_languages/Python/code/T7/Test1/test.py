from cmath import sqrt

REPS = 100000000

def test(x):
    i = x + sqrt(16384) + 1
    j = x + sqrt(16384)

if __name__ == "__main__":
    x = 100
    for _ in range(REPS):
        test(x)
