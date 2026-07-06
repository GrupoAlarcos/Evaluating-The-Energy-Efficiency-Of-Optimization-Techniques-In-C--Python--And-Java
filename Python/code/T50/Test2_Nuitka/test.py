REPS = 100000
N = 50

def test():
    A = [[0 for _ in range(N)] for _ in range(N)]
    for i in range(1, N):
        j = 0
        while j < i:
            A[i][j] = 3
            j += 1
    return A

if __name__ == "__main__":
    for _ in range(REPS):
        test()