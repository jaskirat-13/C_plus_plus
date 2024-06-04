#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> arr, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(vector<int> arr, int s,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {12, 15, 18, 2, 4};
    int n = arr.size();
    int key;
    cout<< "Enter key to search for : ";
    cin>> key;
    
    int pivot = pivotIndex(arr, n);
    
    int index;
    
    if(key >= arr[pivot] && key <= arr[n-1]){
        index = binarySearch(arr, pivot, n-1, key);
    }
    else{
        index = binarySearch(arr, 0, pivot-1, key);
    }
    cout<< "Key found at : " << index << endl;
    return 0;
}