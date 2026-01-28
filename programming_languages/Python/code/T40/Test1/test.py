REPS = 100000000
N = 50

def power(val):
    return val * val

def test(array):
    for i in range(N):
        array[i] = power(array[i])

if __name__ == "__main__":
    array = [1] * N
    for i in range(REPS):
        test(array)
