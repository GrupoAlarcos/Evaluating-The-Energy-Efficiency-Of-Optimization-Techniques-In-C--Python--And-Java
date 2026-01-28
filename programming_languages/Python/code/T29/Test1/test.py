REPS = 100000000

def test(i, maxN, minN):
    return (i <= maxN) and (i >= minN)

if __name__ == "__main__":
    for _ in range(REPS):
        test(2, 5, 1)
