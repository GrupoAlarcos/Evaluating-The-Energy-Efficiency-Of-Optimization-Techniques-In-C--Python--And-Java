REPS = 100000000
N = 50

def power(array):
    for i in range(N):
        array[i] = array[i] * array[i]

def test(array):
    power(array)

if __name__ == "__main__":
    array = [1] * N
    for i in range(REPS):
        test(array)
