REPS = 100000000
N = 50

def test(array, val):
    pos = -1
    for i in range(N):
        if array[i] == val:
            pos = i
    return pos

if __name__ == "__main__":
    array = [10 if i == 25 else 0 for i in range(N)]
    for _ in range(REPS):
        test(array, 10)
