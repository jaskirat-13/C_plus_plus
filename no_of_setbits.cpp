#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int a;
    cin >> a;
    int setBitsA = countSetBits(a);
    cout << "Number of set bits in a: " << setBitsA;
    return 0;
}
