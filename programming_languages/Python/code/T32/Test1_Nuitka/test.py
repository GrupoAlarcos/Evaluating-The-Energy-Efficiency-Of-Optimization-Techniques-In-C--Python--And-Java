REPS = 100000000

def test(b1, b2, b3, c, d, e, f):
    if b1: return c
    elif b2: return d
    elif b3: return e
    else: return f

if __name__ == "__main__":
    f, e, d, c, b1, b2, b3 = 4, 3, 2, 1, 0, 0, 1
    for _ in range(REPS):
        test(b1, b2, b3, c, d, e, f)
