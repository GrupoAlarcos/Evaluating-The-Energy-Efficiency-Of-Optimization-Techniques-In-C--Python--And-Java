REPS = 100000000
N = 50

def test(array):
    for i in range(N):
        array[i] = 0

if __name__ == "__main__":
    array = [0] * N
    for _ in range(REPS):
        test(array)
