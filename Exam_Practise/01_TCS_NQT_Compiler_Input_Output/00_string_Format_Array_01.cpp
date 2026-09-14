//GIven Array Without Size in String Format
#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);

    stringstream ss(line);
    vector<int>arr;
    int num;

    while(ss >> num)arr.push_back(num);
    
    for(int x : arr)cout<<x<<" ";
    return 0;
}