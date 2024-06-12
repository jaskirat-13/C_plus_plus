#include <iostream>
using namespace std;

void maxRowSum(int arr[][3], int row, int col){
    int max = 0;
    int rowIndex = -1;
    
    for(int i = 0 ; i < row ; i++){
        int sum = 0;
        for(int j = 0 ; j < col ; j++){
            sum += arr[i][j];
        }
        cout<< "Sum of " << i+1 << " row is "<< sum << endl;
        
        if(sum > max){
            max = sum;
            rowIndex = row;
        }
    }
    cout<< "Maximum sum is " << max << " and is present in row " << rowIndex<< endl;
}

int main(){
    int arr[3][3] = {3, 4, 11, 2, 12, 1, 7, 8, 7};
    
    maxRowSum(arr, 3, 3);
    return 0;
}