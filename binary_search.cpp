#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(key == arr[mid]) {
            return mid;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout<<"Enter element to search for : ";
    cin>> key;
    
    int index = binarySearch(arr, n, key);
    
    cout<< "Element found at index " << index;
    return 0;
}