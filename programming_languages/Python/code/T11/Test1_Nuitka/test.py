REPS = 100000000
N = 10
SUM = 0

def test(array):
    global SUM
    for i in range(N):
        SUM += array[i]

if __name__ == "__main__":
    array = [i for i in range(N)]
    for _ in range(REPS):
        test(array)
