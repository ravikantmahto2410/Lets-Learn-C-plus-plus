#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1};
    int largest = INT_MIN;
    int secLargest = INT_MIN;

    for(int i=0; i < arr.size(); i++){
        if(largest < arr[i]){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] >= secLargest){
            secLargest = arr[i];
        }
    }
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;
    for(int i=0; i < arr.size(); i++){
        if(arr[i] <= smallest){
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] >= smallest && arr[i] <= secSmallest){
            secSmallest = arr[i];
        }
    }

    if(secSmallest == INT_MAX) {
        cout<<"secSmallest : " <<-1<<endl;
    }
    else{
        cout<<secSmallest<<endl;
    }
    if(secLargest == INT_MIN){
        cout<<"secLargest : " <<-1<<endl;
    }
    else{
        cout<<secLargest<<endl;
    }
}