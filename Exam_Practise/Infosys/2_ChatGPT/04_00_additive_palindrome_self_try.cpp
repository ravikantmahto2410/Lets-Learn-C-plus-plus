#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num){
    long long temp = num;
    long long afterRev = 0;
    while(num > 0){
        int digit = num % 10;
        num /= 10;
        afterRev = afterRev * 10 + digit;
    }
    if(afterRev == temp) return true;
    return false;
}
long long reverseNum(int num){
    long long afterRev = 0;
    while(num  > 0){
        int digit = num % 10;
        num /= 10;
        afterRev = afterRev * 10 + digit;
    }
    return afterRev;
}
int main(){
    int num;
    cin>>num;

    long long finalPalindromeNum = 0;
    while(isPalindrome(num) != true){
        long long beforeRev = num;
        long long afterRev = reverseNum(num);
        long long totalSum = beforeRev + afterRev;

        if(isPalindrome(totalSum) == true){
            finalPalindromeNum = totalSum;
            break;
        }
        else{
            num = totalSum;
        }
    }
    cout<<finalPalindromeNum<<endl;
    return 0;
}