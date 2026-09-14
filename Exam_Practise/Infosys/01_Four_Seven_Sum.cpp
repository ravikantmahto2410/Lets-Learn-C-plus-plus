#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr = {3,1,6,4,2,3,7,2};
    int totalSum = 0;
    int i = 0;
    int j = arr.size() - 1;
    int idxFour = -1;
    int idxSeven = -1;
    int sumBefAndAft = 0;
    while(arr[i] != 4 || arr[j] != 7){
        if(arr[i] == 4) idxFour = i;
        if(arr[j] == 7) idxSeven = j;
        if(arr[i] != 4){
            sumBefAndAft += arr[i];
        }
        if(arr[j] != 7){
            sumBefAndAft += arr[j];
        }
    }
    string s = "";
    for(int l = idxFour; l <= idxSeven; l++){
        s += arr[l] - '0';
    }
    int betNum = stoi(s);
    totalSum = betNum + sumBefAndAft;
    cout<<totalSum<<endl;
}