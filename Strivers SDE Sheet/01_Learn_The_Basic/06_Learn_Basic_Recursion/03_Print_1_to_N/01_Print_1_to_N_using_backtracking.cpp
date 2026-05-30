#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){
    if(i < 1) return;
    fun(i-1, n);
    cout<<i<<endl;
}

int main(){
    int n = 5;
    fun(5,5);
    return 0;
}
