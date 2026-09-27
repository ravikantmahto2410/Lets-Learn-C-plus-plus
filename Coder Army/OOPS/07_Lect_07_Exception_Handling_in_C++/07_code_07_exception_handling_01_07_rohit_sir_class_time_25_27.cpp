#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    if(b == 0){
        cout<<"Divide by Zero is not possible"<<endl;
        return 0;
    }
    int c = a/b;

    cout<<c<<endl;
}