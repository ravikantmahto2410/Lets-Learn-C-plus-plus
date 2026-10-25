#include<bits/stdc++.h>
using namespace std;

string convert_to_binary(int n){
    string res = "";
    while(n > 0){
        if(n % 2 == 1) res += '1';
        else res += '0';
        n /= 2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int n = 13;
    string ans = convert_to_binary(n);
    cout<<ans<<endl;
}