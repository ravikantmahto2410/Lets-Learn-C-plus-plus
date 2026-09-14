#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {3,1,6,4,2,3,7,2};
    int n = nums.size();
    long long sumConcat = 0;
    int idxFour = -1, idxSeven = -1;

    for(int i=0; i < n; i++){
        if(nums[i] == 4 && idxFour == -1) idxFour = i;
        if(nums[i] == 7 && idxSeven == -1) idxSeven = i;

    }
    long long sumBefore = accumulate(nums.begin(), nums.begin() + idxFour, 0ll);
    long long sumAfter = accumulate(nums.begin() + idxSeven + 1, nums.end(), 0ll);

    
    for(int i=idxFour; i <= idxSeven; i++){
        sumConcat = sumConcat * 10 + nums[i];
    }
    cout<<sumConcat + sumBefore + sumAfter<<endl;
}