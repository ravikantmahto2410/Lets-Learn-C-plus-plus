#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {3,1,6,4,2,3,7,2};
    long long sumBefore = 0, sumAfter = 0, concat = 0;
    int idxFour = -1;
    int idxSeven = -1;
    int n = nums.size();

    for(int i=0; i < n; i++){
        if(nums[i] == 4 && idxFour == -1) idxFour = i;
        if(nums[i] == 7 && idxSeven == -1) idxSeven = i;
        if(idxFour == -1){
            sumBefore += nums[i];
        }
    }
    for(int i=idxSeven + 1; i < n; i++){
        sumAfter += nums[i];
    }

    for(int i=idxFour; i <= idxSeven; i++){
        concat = concat * 10 + nums[i];
    }
    cout<<concat + sumBefore + sumAfter<<endl;
}