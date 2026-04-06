#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1 = 20,n2 = 15;
    int num = min(n1,n2);

    int ans = 1;
    for(int i=2; i <= num; i++){
        if(n1 % i == 0 && n2 % i == 0){
            ans *= i;
        }
    }
    cout<<ans<<endl;
}