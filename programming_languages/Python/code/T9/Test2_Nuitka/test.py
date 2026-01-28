REPS = 100000000
GLOBAL = 0

def test():
    global GLOBAL
    GLOBAL = 2
    return

if __name__ == "__main__":
    for _ in range(REPS):
        test()
