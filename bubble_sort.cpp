#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0 ; i < n-1 ; i++){
        bool swapped = false;
        
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                bool swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[] = {6, 2, 8, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    for(int i = 0 ; i < n ; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}