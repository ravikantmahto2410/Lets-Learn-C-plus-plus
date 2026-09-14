#include<bits/stdc++.h>
using namespace std;

int sumToN(int n){
    if(n == 0){
        return 0;
    }
    return n + sumToN(n-1);
}

int main(){
    int n;
    cin>>n;

    int totalSum = sumToN(n);
    cout<<totalSum;
}



