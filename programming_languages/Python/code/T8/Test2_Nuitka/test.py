REPS = 100000000

map_data = {
    "AAAAAA": 1,
    "BBBBBB": 2,
    "CCCCCC": 3,
    "DDDDDD": 4,
    "EEEEEE": 5,
    "FFFFFF": 6,
    "GGGGGG": 7,
    "HHHHHH": 8,
    "IIIIII": 9,
    "JJJJJJ": 10,
    "KKKKKK": 11,
    "LLLLLL": 12,
    "MMMMMM": 13,
    "NNNNNN": 14,
    "OOOOOO": 15,
    "PPPPPP": 16,
    "QQQQQQ": 17,
    "RRRRRR": 18,
    "SSSSSS": 19,
    "TTTTTT": 20,
}

def data_to_value(data):
    return map_data.get(data, -1)  

def test():
    data_to_value("TTTTTT")

if __name__ == "__main__":
    for _ in range(REPS):
        test()
