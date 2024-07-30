#include<iostream>
using namespace std;

class Solution {
public:
       int reverse(int x) {
        int ReverseN = 0;
        int copyofX = x ;
        int lastDigit ;
        while (copyofX!=0){
            lastDigit = copyofX % 10;
            copyofX = copyofX/10;
            if(ReverseN > INT_MAX/10 || ReverseN > INT_MAX/10 && lastDigit > 7){
                return 0;
            }
             if(ReverseN < INT_MIN/10 || ReverseN < INT_MIN/10 && lastDigit -8){
                return 0;
            }
            ReverseN = (ReverseN*10)+lastDigit;
            
        }

        return ReverseN;
    }
};
int main(){
    int x;
    cout<<"Enter a num : ";
    cin>>x;
    Solution obj;
    obj.reverse(x);

}
