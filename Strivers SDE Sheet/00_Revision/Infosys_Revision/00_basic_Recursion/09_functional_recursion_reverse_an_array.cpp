#include<bits/stdc++.h>
using namespace std;
void revFun(vector<int> &arr, int i, int j){
    if(i >= j) return;
    swap(arr[i],arr[j]);
    revFun(arr, i+1, j-1);
}
int main(){
    vector<int>arr = {1,2,3,4,2};
    int n = arr.size();
    revFun(arr,0,n-1);
    for(int i=0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}