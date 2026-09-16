#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1, 2, 0, 4, 3, 0, 5, 0};

    int j = -1;

    for(int i=0; i < arr.size(); i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return 0;
    int i = j+1;
    for(int i=j+1; i < arr.size(); i++){
        if(arr[i] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
        
    }
    for(int i=0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}