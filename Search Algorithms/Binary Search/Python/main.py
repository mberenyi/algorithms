def binarySearch(arr, low, high, x):
    while low <= high:
        mid = low + (high-low) // 2
        if(arr[mid] == x):
            return mid
        if(arr[mid] < x):
            low = mid +1
        else:
            high = mid - 1
    return -1


if __name__ == "__main__":
    arr:list = [1, 5, 16, 19, 23, 33, 50, 64]
    n = len(arr)
    x = 23
    result = binarySearch(arr, 0, n-1, x)
    if result == -1:
        print('Element not found in list.')
    else:
        print(f'Element found at: {result}')
