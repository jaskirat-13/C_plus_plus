#include <iostream>
using namespace std;

int search(int arr[], int size, int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    
    int key;
    cout<<"Enter element to search for : ";
    cin>>key;
    
    int found = search(arr, 10, key);
    
    if(found != -1){
        cout<< "Element found at index "<<found<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    return 0;
}