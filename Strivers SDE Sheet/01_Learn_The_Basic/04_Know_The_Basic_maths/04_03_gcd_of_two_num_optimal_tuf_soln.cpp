#include<bits/stdc++.h>
using namespace std;

int findgcd(int n1, int n2){
    while(n1 > 0 && n2 > 0){
        if(n1 > n2){
            n1 = n1 % n2;
        }else{
            n2 = n2 % n1;
        }
        if(n1 == 0)return n1;
        return n2;
    }
}
int main(){
    int n1 = 15, n2 = 20;
    int gcd = findgcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}