#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long reversedNum = 0, originalNum = x;
        int remainder;

        while (x > 0) {
            remainder = x % 10;
            reversedNum = reversedNum * 10 + remainder;
            x = x / 10;
        }

        if (originalNum == reversedNum) {
            cout << "The number " << originalNum << " is a palindrome number." << endl;
            return true;
        } else {
            cout << "The number " << originalNum << " is not a palindrome number." << endl;
            return false;
        }
    }
};

