#include<bits/stdc++.h>
using namespace std;

int main(){
    string inputString;
    cin>>inputString;

    string ans;

    for(int i=1; i < inputString.size() && ans.size() < 4; i+=2){
        char ch = inputString[i];
        int digit = ch - '0';
        int squareNum = digit * digit;
        ans += to_string(squareNum);
    }
    if(ans.size() > 4){
        ans = ans.substr(0,4);
    }
    cout<<ans<<endl;
}