REPS = 100000000
N = 50
VALUE = 0

def f():
    return 512

def test():
    global VALUE
    aux = VALUE
    for i in range(N):
        aux += f()
    VALUE = aux

if __name__ == "__main__":
    for _ in range(REPS):
        test()
