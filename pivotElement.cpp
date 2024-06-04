#include <bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int n){
    int rightSum = accumulate(arr, arr + n, 0);
    int leftSum = 0;
    
    for(int i = 0 ; i < n ; i++){
        rightSum = rightSum - arr[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum = leftSum + arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int index = pivotIndex(arr, n);
    cout<< "Index of pivot element is : " << index << endl;
    return 0;
}