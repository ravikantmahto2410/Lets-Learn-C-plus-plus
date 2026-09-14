#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin,line);

    stringstream ss(line);
    vector<int>arr;
    string token;

    while(getline(ss, token, ',')){
        arr.push_back(stoi(token));
    }

    for(int i=0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}