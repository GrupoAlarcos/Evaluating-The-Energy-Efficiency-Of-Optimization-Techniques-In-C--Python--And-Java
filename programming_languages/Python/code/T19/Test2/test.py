REPS = 100000000
N = 100

def test(array):
    for i in range(N - 1, -1, -1):
        array[i] = i

if __name__ == "__main__":
    array = [0] * N
    for _ in range(REPS):
        test(array)
