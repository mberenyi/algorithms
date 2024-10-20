#include <iostream>

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int arr[] = {50, 16, 23, 5, 1, 64, 33, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
}

