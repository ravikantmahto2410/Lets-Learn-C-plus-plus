#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1;
    int digitCnt = 0;
    while(n > 0){
        digitCnt++;
        n /= 10;
    }
    cout<<digitCnt<<" "<<endl;
    return 0;
}