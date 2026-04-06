#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = { 9, 3, 1, 19, 3, 2, 8, 12, 5};

    priority_queue<int, vector<int>, greater<int>> minheapvector(v.begin(), v.end());


    cout<<minheapvector.top()<<endl;
    return 0;

}