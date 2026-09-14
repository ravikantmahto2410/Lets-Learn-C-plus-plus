#include<bits/stdc++.h>
using namespace std;

void printOneToN(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<endl;
    printOneToN(i+1, n);
}
int main(){
    int n;
    cin>>n;

    printOneToN(1,n);
}