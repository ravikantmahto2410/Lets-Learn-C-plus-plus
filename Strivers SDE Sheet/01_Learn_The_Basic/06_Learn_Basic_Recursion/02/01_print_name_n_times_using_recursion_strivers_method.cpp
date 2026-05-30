#include<bits/stdc++.h>
using namespace std;
void fun(int i, int n){
    if(i  > n) return;
    cout<<"Ravikant"<<endl;
    fun(i+1, n);
}
int main(){
    int n = 3;
    fun(1, n);
    return 0;
}