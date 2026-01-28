REPS = 100000000
GLOBAL = 0

def test():
    global GLOBAL
    i = 1
    GLOBAL = 1
    GLOBAL = 2
    return
    GLOBAL = 3

if __name__ == "__main__":
    for _ in range(REPS):
        test()
