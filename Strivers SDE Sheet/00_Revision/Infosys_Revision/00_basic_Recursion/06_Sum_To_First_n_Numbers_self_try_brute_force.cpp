#include<bits/stdc++.h>
using namespace std;

void sumToN(int sum, int n){
    if(n < 1){
        cout<<sum;
        return;
    }
    sumToN(sum + n, n-1);
}
int main(){
    int n;
    cin>>n;

    sumToN(0,n);
}