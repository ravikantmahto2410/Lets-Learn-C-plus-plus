#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,6,5,8,11};
    int n = nums.size();
    int target = 14;
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}