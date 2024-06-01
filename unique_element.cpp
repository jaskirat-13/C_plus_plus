#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 3, 1, 7, 3, 2};
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
    
    cout<< "Unique element : " << ans;
    return 0;
}