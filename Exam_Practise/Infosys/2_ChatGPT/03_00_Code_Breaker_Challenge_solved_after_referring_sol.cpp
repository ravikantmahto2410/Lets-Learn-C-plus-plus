#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);

    stringstream ss(line);
    string token;
    string result = "";

    while(getline(ss, token, ',')){
        size_t colon = token.find(':');
        string name = token.substr(0,colon);
        string code = token.substr(colon+1);

        int maxvalid = -1;
        int n = name.length();

        //find the largest valid digit;
        for(char c : code){
            int d = c - '0';
            if(d <= n && d >= 1){
                maxvalid = max(maxvalid, d);
            }
        }
        if(maxvalid == -1){
            result += 'X';
        }
        else{
            result += name[maxvalid-1];
        }
        
        

    }
    cout<<result<<endl;
    return 0;

}