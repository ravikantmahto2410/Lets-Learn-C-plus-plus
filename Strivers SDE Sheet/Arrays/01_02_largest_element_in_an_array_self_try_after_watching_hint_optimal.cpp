#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {2,5,1,3,1000};
    int maxNum = arr[0];

    for(int i=0; i < arr.size(); i++){
        maxNum = max(maxNum, arr[i]);

    }
    cout<<maxNum <<endl;
}