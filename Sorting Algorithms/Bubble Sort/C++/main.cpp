#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, int n){
    bool swapped;
    for(int i = 0; i < n-1; i++){
        swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
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
    bubbleSort(arr, n);
    printVector(arr, n);
}