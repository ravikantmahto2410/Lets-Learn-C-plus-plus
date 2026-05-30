#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    int cnt = 0;
    for(int i=1; i * i <= n; i++){
        if(n % i == 0) cnt++;
        if( i != (n / i))cnt++;
    }
    if(cnt > 2)cout<<false;
    else cout<<true;
}