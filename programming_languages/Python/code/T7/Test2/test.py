from cmath import sqrt

REPS = 100000000

def test(x):
    aux = x + sqrt(16384)
    i = aux + 1
    j = aux

if __name__ == "__main__":
    x = 100
    for _ in range(REPS):
        test(x)
