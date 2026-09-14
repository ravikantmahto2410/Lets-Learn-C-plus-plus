#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string name, int i, int size){
    if(i >= size / 2) return true;
    if(name[i] != name[size-i-1]) return false;
    return checkPalindrome(name, i+1, size);
}
int main(){
    string name = "MADA";
    int n = name.size();
    bool ans = checkPalindrome(name,0,n);
    cout<<ans;
}