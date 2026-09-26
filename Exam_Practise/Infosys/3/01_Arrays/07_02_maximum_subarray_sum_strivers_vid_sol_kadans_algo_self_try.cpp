#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {-2,-3,4,-1,-2,1,5,-3};

    int n = nums.size();
    int maxim = INT_MIN, sum = 0;

    int start = -1,ansStart = -1,ansEnd=-1;
    for(int i=0; i < n; i++){
        if(sum == 0){
            start = i;
        }
        sum += nums[i];

        if(sum > maxim){
            maxim = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }

}