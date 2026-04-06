#include<bits/stdc++.h>
using namespace std;
int main(){
    int digitcnt = 0;
    int n = 12345;
    digitcnt = (int)(log10(n) + 1);
    cout<<digitcnt<<endl;
    return 0;
}