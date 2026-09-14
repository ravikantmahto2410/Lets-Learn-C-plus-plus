#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {3,1,6,4,2,3,7,2};
    
    int n = nums.size();
    long long sumBefore = 0, sumAfter = 0;
    int idxFour = -1;
    int idxSeven = -1;

    for(int i=0;i < n; i++){
        if(nums[i] == 4 && idxFour == -1) idxFour = i;
        if(nums[i] == 7 && idxSeven == -1) idxSeven = i;

    }
    for(int i = 0; i < idxFour; i++){
        sumBefore += nums[i];
    }
    for(int i= idxSeven+1; i < n; i++){
        sumAfter += nums[i];
    }
    string s = "";
    for(int i=idxFour; i <= idxSeven; i++){
        s += to_string(nums[i]);
    }
    long long concat = stoll(s);
    cout<<sumAfter + sumBefore + concat<<endl;

}