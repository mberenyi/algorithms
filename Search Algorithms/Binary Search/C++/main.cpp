#include <iostream>

int binarySearch(int arr[], int low, int high, int x){
    while(low <= high){
        int mid = low + (high-low) / 2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 5, 16, 19, 23, 33, 50, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 23;
    int result = binarySearch(arr, 0, n-1, x);
    if(result==-1) std::cout << "Element not found in array.";
    else std::cout << "Element found at: " << result;
    return 0;
}