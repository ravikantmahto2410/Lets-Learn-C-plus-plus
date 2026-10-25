#include<bits/stdc++.h>
using namespace std;

int convert_to_decimal(string num){
    
    int power = 1;
    int ans = 0;
    for(int i=num.length() - 1; i >= 0; i--){
        if(num[i] == '1'){
            ans = ans + power;
        }
        power = power * 2;
    }
    return ans;

}
int main(){
    string num = "1101";
    int nums = convert_to_decimal(num);
    cout<<nums;
}