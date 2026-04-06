#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int>arr;
    string token;
    while(getline(ss, token, ',')){
        arr.push_back(stoi(token));
    }

    int maxElem = INT_MIN;
    for(int i=0;i<arr.size(); i++){
        maxElem = max(maxElem, arr[i]);
    }
    cout<<maxElem<<" ";
}