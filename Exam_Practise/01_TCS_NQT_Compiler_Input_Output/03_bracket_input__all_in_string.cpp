#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin, line);

    //remove [and]
    line.erase(remove(line.begin(),line.end(),'['),line.end());
    line.erase(remove(line.begin(),line.end(),']'),line.end());

    stringstream ss(line);
    vector<int>arr;
    string token;
    while(getline(ss, token, ',')){
        token.erase(remove(token.begin(), token.end(),' '),token.end());// remove spaces
        arr.push_back(stoi(token));
    }
}