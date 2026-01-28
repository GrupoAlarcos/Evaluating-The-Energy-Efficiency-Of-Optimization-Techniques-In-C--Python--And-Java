REPS = 100000000
N = 100

def test(a, b, x):
    if x == 1:
        for i in range(N):
            a[i] = 0
    else:
        for i in range(N):
            b[i] = 0

if __name__ == "__main__":
    a = [0] * N
    b = [0] * N
    for _ in range(REPS):
        test(a, b, N)
