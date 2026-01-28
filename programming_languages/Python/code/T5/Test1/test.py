REPS = 100000
N = 60

def test(array):
    for j in range(N):
        for i in range(N):
            array[i][j] = 0

if __name__ == "__main__":
    array = [[0 for _ in range(N)] for _ in range(N)]
    for _ in range(REPS):
        test(array)
