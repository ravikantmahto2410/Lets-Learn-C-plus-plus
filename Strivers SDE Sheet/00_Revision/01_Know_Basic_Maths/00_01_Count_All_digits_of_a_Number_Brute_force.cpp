#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 77891019;
    int cnt = 0;
    while(n > 0){
        cnt++;
        n /= 10;
    }
    cout<<cnt;
}


