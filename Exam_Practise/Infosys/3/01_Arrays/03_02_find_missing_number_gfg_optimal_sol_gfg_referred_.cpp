#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr){
    int size = arr.size() + 1;

    long long currentSum = 0;
    for(int i = 0; i < size - 1; i++){
        currentSum += arr[i];
    }
    long long expectedSum = (size * 1LL * (size + 1)) / 2;
    return expectedSum - currentSum;
    
}
int main(){
    vector<int>nums = {8,2,4,5,3,7,1};
    cout<<findMissing(nums);
}