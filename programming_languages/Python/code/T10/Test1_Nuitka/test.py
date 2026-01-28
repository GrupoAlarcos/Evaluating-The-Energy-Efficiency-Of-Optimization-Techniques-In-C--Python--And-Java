REPS = 100000000

class MyException(Exception):
    pass

def test():
    num = 100
    for _ in range(1):
        try:
            if num == 100:
                raise MyException
        except MyException as e:
            pass
    return 0

if __name__ == "__main__":
    for _ in range(REPS):
        test()
