#include<bits/stdc++.h>
using namespace std;

// This code is perfectly fine

int main(){
    vector<int>arr = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};

    vector<int>temp(arr.size(),0);

    int index = 0;

    for(int i=0; i < arr.size(); i++){
        if(arr[i] != 0){
            temp[index] = arr[i];
            index++;

        }
    }

    // now copy elements from temp to arr
    for(int i=0; i < arr.size(); i++){
        arr[i] = temp[i];
    }
    for(int i=0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}