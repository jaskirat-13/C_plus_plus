// You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = 0;
            pageSum = pageSum + arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m){
    int start = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start <= end){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {10, 20, 30, 40};        // Size of vector is no. of books and arr[i] is no. of pages
    int n = arr.size();
    int m = 2;                                 // Total no. of students
    
    int final = allocateBooks(arr, n, m);
    cout<< "Answer is : " << final << endl;
    return 0;
}