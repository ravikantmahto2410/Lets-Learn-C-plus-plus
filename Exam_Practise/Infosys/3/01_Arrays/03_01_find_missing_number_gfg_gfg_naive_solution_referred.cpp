#include<bits/stdc++.h>
using namespace std;

// could not solve by self, referred the code once , then successfully solved

int missing(vector<int> &nums){
    int size = nums.size() + 1;

    for(int i=1; i <= size; i++){
        bool found = false;
        for(int j=0;j < nums.size(); j++){
            if(nums[j] == i){
                found = true;
                break;
                
            }
        }
        if(!found){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>nums = {8,2,4,5,3,7,1};
    cout<<missing(nums);
    return 0;
}