REPS = 100000000
N = 100

def search(list_, want):
    last = list_[N-1]
    list_[N-1] = want
    i = 0
    while list_[i] != want:
        i += 1
    list_[N-1] = last
    if i < (N - 1) or last == want:
        return i
    return -1

def test(list_):
    return search(list_, 98)

if __name__ == "__main__":
    list_ = [i for i in range(N)]
    for _ in range(REPS):
        test(list_)
