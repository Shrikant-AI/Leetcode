#include <iostream>
#include<bits/stdc++.h>
using namespace std;

  bool isPalindrome(int x) {
        
        int originalx = x;
        int reverse = 0;
        int lastDigit = 0;
        if(x<0)return false;
        while (x !=0){
            lastDigit = x % 10;
           if(reverse> INT_MAX/10 || reverse> INT_MAX/10 && lastDigit >7 ){
            return 0;
           }
    
            reverse = (reverse*10)+lastDigit;
             x = x/10;

        }
        if(originalx==reverse)return true;
        else return false;
    }
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
