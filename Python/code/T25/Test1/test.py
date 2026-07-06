REPS = 100000000
N = 100

def search(list_, want):
    for i in range(N):
        if list_[i] == want:
            return i
    return -1

def test(list_):
    return search(list_, 98)

if __name__ == "__main__":
    list_ = [i for i in range(N)]
    for _ in range(REPS):
        test(list_)
