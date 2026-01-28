REPS = 100000000
N = 20

class Class:
    def __init__(self):
        self.data = 0

    def set_data(self, data):
        self.data = data

    def get_data(self):
        return self.data

def test(c, array):
    for i in range(N):
        if c.get_data() == 1:
            array[i] = 0

if __name__ == "__main__":
    array = [0] * N
    c = Class()
    c.set_data(1)
    for _ in range(REPS):
        test(c, array)