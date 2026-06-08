#include<bits/stdc++.h>
using namespace std;

void revfun(int i, int arr[], int j){
    if(i >= j)return;
    swap(arr[i],arr[j]);
    revfun(i+1,arr, j-1);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    revfun(0, arr, n-1);
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}