#include <iostream>
using namespace std;

bool linearSearch(int arr[][4], int row, int col, int target){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4] = {1, 2, 5, 6, 23 ,56, 7, 8, 99, 100, 11, 12};
    int target;
    cout<< "Enter element to search : ";
    cin>> target;
    
    if(linearSearch(arr, 3, 4, target)){
        cout<< "Element found" << endl;
    }
    else{
        cout<< "Element not found";
    }
    return 0;
}