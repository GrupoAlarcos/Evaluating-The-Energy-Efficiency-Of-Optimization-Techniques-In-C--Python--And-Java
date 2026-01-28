import random

REPS = 100000
N = 50

def swap(a, b):
    return b, a

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = swap(arr[i], arr[j])
    arr[i + 1], arr[high] = swap(arr[i + 1], arr[high])
    return i + 1

def quicksort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quicksort(arr, low, pi-1)
        quicksort(arr, pi+1, high)

def test(array):
    quicksort(array, 0, N-1)

if __name__ == "__main__":
    array = [random.randint(0, N - 1) for _ in range(N)]
    for i in range(REPS):
        test(array)
