#include<bits/stdc++.h>
using namespace std;
// Wrong code i thought this way at the very first
int main(){
    int arr[7] = {1,2,0,1,0,4,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;

    while(start < end){
        if(arr[start] != 0 && arr[end] == 0){
            start++;
            end--;
        }
        else if(arr[start] == 0 && arr[end] != 0){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        else if(arr[start] != 0 && arr[end] != 0){
            start++;
        }
        else if(arr[start] == 0 && arr[end] == 0){
            end--;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

