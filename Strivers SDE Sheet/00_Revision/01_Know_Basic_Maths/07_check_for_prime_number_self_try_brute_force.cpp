#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    int divCnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            divCnt++;
        }
    }
    if(divCnt > 2){
        cout<<false;
    }else{
        cout<<true;
    }
}