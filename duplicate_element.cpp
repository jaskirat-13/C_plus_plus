#include <iostream>
using namespace std;

int main(){
    int arr[] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<< "Elements of array : ";
    for(int i = 0 ; i < size ; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    
    int ans = 0;
    
    for(int i = 0 ; i < size ; i++){
        ans = ans ^ arr[i];
    }
    
    for(int i = 0 ; i < size ; i++){
        ans = ans ^ i;
    }
    
    cout<< "Duplicate element : " << ans;
    return 0;
}