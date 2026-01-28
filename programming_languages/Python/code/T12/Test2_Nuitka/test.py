REPS = 100000000

def sub(x, y):
    return x + -y

def test(x, y):
    sub(x, y) 

if __name__ == "__main__":
    minuend = 10
    subtrahend = 5
    for _ in range(REPS):
        test(minuend, subtrahend)
