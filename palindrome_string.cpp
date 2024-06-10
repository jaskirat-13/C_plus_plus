#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    string filteredString = "";

    for(char c: s){
        if(isalnum(c)){
            filteredString += tolower(c);
        }
    }

    int start = 0;
    int end = filteredString.size() - 1;

    while(start < end){
        if(filteredString[start] != filteredString[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string str = "c1 O$d@eeD o1c";
    if(checkPalindrome(str)){
        cout<< "String is palindrome";
    }
    else{
        cout<< "String is not palindrome";
    }
    return 0;
}
