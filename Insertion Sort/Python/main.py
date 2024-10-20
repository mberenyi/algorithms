def insertionSort(arr:list)->None:
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j+1] = key

def printArray(arr:list)->None:
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

if __name__ == "__main__":
    arr:list = [50, 16, 23, 5, 1, 64, 33, 19]
    printArray(arr)
    insertionSort(arr)
    printArray(arr)