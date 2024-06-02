#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    
    int i = 0 , j = 0;
    vector<int> ans;
    
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    cout<<"Intersection of array1 and array2 is : " << endl;
    for(int i = 0 ; i < ans.size() ; i++){
        cout<< ans[i] << " ";
    }
    return 0;
}