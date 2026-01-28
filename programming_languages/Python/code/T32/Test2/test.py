REPS = 100000000

def test(b1, b2, b3, lookup):
    return lookup[b1*4 + b2*2 + b3]

if __name__ == "__main__":
    f, e, d, c, b1, b2, b3 = 4, 3, 2, 1, 0, 0, 1
    lookup = [f, e, d, d, c, c, c, c]
    for _ in range(REPS):
        test(b1, b2, b3, lookup)