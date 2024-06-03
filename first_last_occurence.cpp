#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout<<"Enter key : ";
    cin>> key;
    
    int first = firstOcc(arr, n, key);
    cout<< "First occurence of element is at " << first << endl;
    
    int last = lastOcc(arr, n, key);
    cout<< "Last occurence of element is at " << last << endl;

    int total = (last - first) + 1;
    cout<< "Total number of occurences : " << total << endl;
    return 0;
}
