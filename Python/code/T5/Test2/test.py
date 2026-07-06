REPS = 100000
N = 60

def test(array):
    for i in range(N):
        for j in range(N):
            array[i][j] = 0

def main():
    array = [[0 for _ in range(N)] for _ in range(N)]
    for _ in range(REPS):
        test(array)
    return array

if __name__ == "__main__":
    main()