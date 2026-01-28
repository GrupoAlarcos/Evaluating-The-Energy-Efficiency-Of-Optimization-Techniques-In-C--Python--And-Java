REPS = 100000000
N = 50

def test(array):
    for i in range(0, N, 5):
        array[i] = 0
        array[i + 1] = 0
        array[i + 2] = 0
        array[i + 3] = 0
        array[i + 4] = 0

if __name__ == "__main__":
    array = [0] * N
    for _ in range(REPS):
        test(array)
