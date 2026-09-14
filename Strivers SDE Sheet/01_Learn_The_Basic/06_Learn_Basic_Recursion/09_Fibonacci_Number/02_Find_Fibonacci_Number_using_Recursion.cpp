#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n <= 1) return n;
    int last = fibo(n-1);
    int secLast = fibo(n-2);

    return last + secLast;
}


int main(){
    cout<<fibo(4)<<endl;
    return 0;

}