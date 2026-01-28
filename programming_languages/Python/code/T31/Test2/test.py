import os

REPS = 100000000
N = 50
NBUF = 5

def test(array, buf, file):
    i = 0
    auxN = N + (N % NBUF)
    while i < auxN:
        for j in range(NBUF):
            if (i + j) < N:
                buf[j] = array[i + j]
            else:
                buf[j] = '\0'    
        i += NBUF
        file.write(''.join(buf))

if __name__ == "__main__":
    array = ['a'] * N
    buf = ['a'] * NBUF
    with open("test.txt", "w") as file:     
        for _ in range(REPS):
            test(array, buf, file)
    os.remove("test.txt")
