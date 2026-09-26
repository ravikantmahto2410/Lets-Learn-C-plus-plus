#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {12, 35 , 1, 10, 34, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    int maxelem = arr[n-1];

    for(int i = n-1; i >= 0; i--){
        if(arr[i] < maxelem){
            cout<<"secLargest  : "<<arr[i]<<endl; 
            return 0;
        }
    }
    cout<<-1;
}