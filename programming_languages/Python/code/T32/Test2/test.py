import random

REPS = 100000000
N_SAMPLES = 1000

def test(b1, b2, b3, c, d, e, f, lookup):
    return lookup[b1 * 4 + b2 * 2 + b3]

if __name__ == "__main__":
    f, e, d, c = 4, 3, 2, 1
    lookup = [f, e, d, d, c, c, c, c]
    samples = [(random.getrandbits(1), random.getrandbits(1), random.getrandbits(1)) for _ in range(N_SAMPLES)]
    
    for _ in range(REPS // N_SAMPLES):
        for b1, b2, b3 in samples:
            test(b1, b2, b3, c, d, e, f, lookup)
