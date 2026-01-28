REPS = 100000000
N = 50

def test(array, ierror):
    for i in range(N):
        array[i] += 1

    for j in range(N):
        if array[j] > 1:
            ierror = 1

if __name__ == "__main__":
    array = [i % 2 for i in range(N)]
    ierror = 0
    for _ in range(REPS):
        test(array, ierror)
