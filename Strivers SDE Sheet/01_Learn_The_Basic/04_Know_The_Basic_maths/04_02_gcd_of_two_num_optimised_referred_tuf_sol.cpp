#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 20, n2 = 15;
    int minNum =  min(n1, n2);
    int gcd = 1;
    for(int i=minNum; i > 0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
            break;
        }
    }
    cout<<gcd;
}