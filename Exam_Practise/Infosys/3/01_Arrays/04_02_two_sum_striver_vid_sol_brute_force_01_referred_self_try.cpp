#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>ans = {2,6,5,8,11};
    int target = 14;

    for(int i=0;i<ans.size();i++){
        for(int j=0; j < ans.size(); j++){
            if(i == j){
                continue;
            }
            if(ans[i] + ans[j] == target){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }

    return 0;

}