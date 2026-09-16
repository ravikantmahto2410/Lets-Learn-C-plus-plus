#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {1,2,0,1,0,4,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int nums[7];
    for(int i=0; i < 7; i++){
        nums[i] = arr[i];

    }

    int zero_count = 0;
    for(int i=0; i < 7; i++){
       if(arr[i] == 0){
        zero_count++;
       }
        
    }
    int i = 0;
    for(int i=0; i < 7;i++){
        if(nums[i] != 0){
            arr[i] = nums[i];
            i++;
        }
    }
    cout<<endl;

    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}