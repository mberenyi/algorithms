def bubbleSort(arr:list)->None:
    n = len(arr)
    for i in range(n - 1):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if not swapped:
            break

def printArray(arr:list)->None:
    n = len(arr)
    for i in range(n):
        print(arr[i], end=" ")
    print()

if __name__ == "__main__":
    arr:list = [50, 16, 23, 5, 1, 64, 33, 19]
    printArray(arr)
    bubbleSort(arr)
    printArray(arr)