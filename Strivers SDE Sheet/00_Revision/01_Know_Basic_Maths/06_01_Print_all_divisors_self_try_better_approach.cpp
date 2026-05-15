#include<bits/stdc++.h>
using namespace std;
int main(){
    int N = 36;
    for(int i=1; i * i <= N; i++){
        if(N % i == 0){
            cout<<i<<" ";

            if( i != (N / i)){
                cout<< N / i<<" ";
            }
        }
    }
    return 0;
}