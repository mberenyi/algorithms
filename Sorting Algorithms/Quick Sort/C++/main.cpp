#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high; j++){
        if(arr[j] < pivot){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void printVector(std::vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> arr = {50, 16, 23, 5, 1, 64, 33, 19};
    int n = arr.size();
    printVector(arr, n);
    quickSort(arr, 0, n-1);
    printVector(arr, n);
}

