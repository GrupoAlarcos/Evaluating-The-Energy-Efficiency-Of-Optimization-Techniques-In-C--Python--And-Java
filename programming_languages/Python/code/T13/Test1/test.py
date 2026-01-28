REPS = 100000000
N = 50
VALUE = 0

def f():
    return 512

def test():
    global VALUE
    for i in range(N):
        VALUE += f()

if __name__ == "__main__":
    for _ in range(REPS):
        test()
