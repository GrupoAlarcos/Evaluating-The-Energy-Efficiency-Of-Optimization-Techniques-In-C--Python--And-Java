REPS = 100000000
N = 10
SUM = 0

def test(array):
    global SUM
    SUM = 0
    for i in range(N):
        SUM += array[i]
    return SUM

if __name__ == "__main__":
    array = [i for i in range(N)]
    for _ in range(REPS):
        test(array)