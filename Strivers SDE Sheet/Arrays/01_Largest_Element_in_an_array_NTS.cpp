#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {8, 10, 5, 7, 9};
    int largest_num = INT_MIN;
    for(int i=0; i < arr.size(); i++){
        largest_num = max(largest_num, arr[i]);
    }
    cout<<largest_num<<" "<<endl;
    
}