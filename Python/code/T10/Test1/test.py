REPS = 100000000

class MyException(Exception):
    pass

def test():
    num = 100
    result = 0
    for _ in range(1):
        try:
            if num == 100:
                raise MyException
        except MyException:
            result = 1 
    return result

if __name__ == "__main__":
    for _ in range(REPS):
        test()
