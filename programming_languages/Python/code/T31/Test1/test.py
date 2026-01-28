import os

REPS = 100000000
N = 50

def test(array, file):
    for i in range(N):
        file.write(array[i])

if __name__ == "__main__":
    array = ['a'] * N
    with open("test.txt", "w") as file:     
        for _ in range(REPS):
            test(array, file)
    os.remove("test.txt")
