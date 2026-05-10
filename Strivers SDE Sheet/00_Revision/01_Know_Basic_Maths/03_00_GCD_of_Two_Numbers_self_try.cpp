#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 20;
    int n2 = 15;
    int ans = 0;
    int reqNum = min(n1,n2);
    for(int i=1; i <= reqNum; i++){
        if(n1 % i == 0 && n2 % i == 0) ans = i;
    }
    cout<<ans<<endl;
}