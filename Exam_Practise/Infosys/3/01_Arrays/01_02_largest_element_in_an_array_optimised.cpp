#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {10,10,10};

    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secLargest = INT_MIN;

    for(int i=0; i < n; i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
            
        }
        else if(arr[i] < largest && arr[i] >= secLargest){
            secLargest = arr[i];
        }
    }
    if(secLargest != INT_MIN){
        cout<<"SecLargest : "<<secLargest<<endl;
    }else{
        cout<<-1<<endl;

    }
    return 0;
}