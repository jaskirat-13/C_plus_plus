#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter decimal number : ";
    cin >> n;
    int arr[32];
    int index = 0;
    while( n != 0){
        arr[index] = n % 2;
        n = n / 2;
        index++;
    }
    reverse(arr, arr+32);
    cout<<"Binary number : ";
    for(int i = 0 ; i < 32 ; i++){
        cout << arr[i];
    }
    return 0;
}