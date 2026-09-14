#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin, line);
    

    stringstream ss(line);
    vector<string>words;
    string word;
    while(ss>>word){
        words.push_back(word);
    }
    for(int i=0; i < words.size(); i++){
        cout<<words[i]<<" ";
    }
    return 0;
}