REPS = 100000000

def test():
    num = 100
    for _ in range(1):
        if num != 100:
            continue
    return 0

if __name__ == "__main__":
    for _ in range(REPS):
        test()
