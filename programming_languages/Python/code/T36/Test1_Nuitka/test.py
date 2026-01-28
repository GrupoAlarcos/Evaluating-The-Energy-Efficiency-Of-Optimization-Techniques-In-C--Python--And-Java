REPS = 100000000
N = 50

def test(array, val):
    flag = True
    i = 0
    while i < N and flag:
        if array[i] >= val:
            flag = False
        i += 1

if __name__ == "__main__":
    array = [25 if i == N // 2 else 0 for i in range(N)]
    for _ in range(REPS):
        test(array, 25)
