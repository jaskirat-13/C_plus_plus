#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;  
    }
}

int main(){
    int arr[] = {6, 2, 8, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    for(int i = 0 ; i < n ; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}