REPS = 100000000
N = 100

def search(list_, want):
    i = 0
    while list_[i] != want:
        i += 1
    if i == N:
        return -1
    return i

def test(list_):
    return search(list_, 98)

if __name__ == "__main__":
    list_ = [i for i in range(N)]
    for _ in range(REPS):
        test(list_)
