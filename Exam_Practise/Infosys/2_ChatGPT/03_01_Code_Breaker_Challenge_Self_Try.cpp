#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin, line);

    stringstream ss(line);
    string ans = "";
    string token;
    while(getline(ss, token, ',')){
        size_t colon = token.find(':');
        string name = token.substr(0, colon);
        string code = token.substr(colon + 1);

        int maxValid = -1;
        int n = name.length();

        for(char c : code){
            int d = c - '0';
            if(d >= 1 && d <= n){
                maxValid = max(maxValid, d);

            }
        }
        if(maxValid == -1){
            ans += 'X';
        }
        else{
            ans += name[maxValid-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}