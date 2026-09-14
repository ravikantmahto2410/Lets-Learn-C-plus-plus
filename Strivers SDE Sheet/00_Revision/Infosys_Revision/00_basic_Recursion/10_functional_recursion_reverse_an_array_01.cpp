#include<bits/stdc++.h>
using namespace std;
void revFun(vector<int> &arr, int l, int n){
    if(l >= n/2) return;
    swap(arr[l], arr[n-l-1]);
    revFun(arr, l+1,n);

}

int main(){
    vector<int> arr = {1, 3 ,2, 5, 4};
    int n = arr.size();
    revFun(arr,0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}