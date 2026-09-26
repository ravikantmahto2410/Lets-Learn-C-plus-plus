#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums= {2,6,5,8,11};
    vector<int>ans(2,-1); 
    int target = 14;
    int size = nums.size();
   

    for(int i=0; i < size; i++){
        int rem = target - nums[i];
        
        for(int j=0; j < size; j++){
            if(i == j){
                continue;
            }
            else{
                if(nums[j] == rem){
                    ans[1] = j;
                    ans[0] = i;
                    break;
                }
            }
        }
        

    } 
    for(int i=0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
     return 0;
}