#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 36;
    for(int i=1; i <= 36; i++){
        if( N % i == 0){
            cout<<i<<" ";
        }
    }
}