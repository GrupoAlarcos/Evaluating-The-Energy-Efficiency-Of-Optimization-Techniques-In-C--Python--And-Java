REPS = 100000000

def test():
    num = 100
    result = 0
    for _ in range(1):
        if num == 100:
            result = 1
    return result

if __name__ == "__main__":
    for _ in range(REPS):
        test()
