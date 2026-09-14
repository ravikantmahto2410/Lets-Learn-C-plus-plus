#include<bits/stdc++.h>
using namespace std;
void printNtoOne(int n, int i){
    if(n < i){
        return;

    }
    cout<<n<<endl;
    printNtoOne(n-1,i);
}
int main(){
    int n;
    cin>>n;

    printNtoOne(n,1);
}