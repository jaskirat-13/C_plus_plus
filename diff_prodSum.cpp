#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter a number : ";
    cin>> n;
    
    int m = n;
    int sum = 0, prod = 1;
    
    while(n != 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    cout<<"Difference b/w product and sum of digits of "<< m << " is " << prod - sum << endl;
    return 0;
}