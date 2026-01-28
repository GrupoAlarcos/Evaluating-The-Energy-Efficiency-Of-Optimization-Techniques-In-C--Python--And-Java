REPS = 100000000

def data_to_value(data):
    if data == "AAAAAA":
        return 1
    elif data == "BBBBBB":
        return 2
    elif data == "CCCCCC":
        return 3
    elif data == "DDDDDD":
        return 4
    elif data == "EEEEEE":
        return 5
    elif data == "FFFFFF":
        return 6
    elif data == "GGGGGG":
        return 7
    elif data == "HHHHHH":
        return 8
    elif data == "IIIIII":
        return 9
    elif data == "JJJJJJ":
        return 10
    elif data == "KKKKKK":
        return 11
    elif data == "LLLLLL":
        return 12
    elif data == "MMMMMM":
        return 13
    elif data == "NNNNNN":
        return 14
    elif data == "OOOOOO":
        return 15
    elif data == "PPPPPP":
        return 16
    elif data == "QQQQQQ":
        return 17
    elif data == "RRRRRR":
        return 18
    elif data == "SSSSSS":
        return 19
    elif data == "TTTTTT":
        return 20
    else:
        return -1

def test():
    data_to_value("TTTTTT")

if __name__ == "__main__":
    for _ in range(REPS):
        test()
