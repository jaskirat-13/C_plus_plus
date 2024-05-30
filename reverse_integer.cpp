#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int ans = 0;
    int INT_MAX = pow(2,31) - 1;
    int INT_MIN = -pow(2,31);
    while(n != 0){
        int digit = n % 10;
        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            cout<<"Cannot reverse the number";
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout<<"Reversed number : "<<ans;
    return 0;
}