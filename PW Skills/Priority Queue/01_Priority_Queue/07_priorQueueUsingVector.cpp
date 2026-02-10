#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = { 9, 3, 1, 19, 3, 2, 8, 12, 5};

    priority_queue<int, vector<int>, greater<int>> minheapvector(v.begin(), v.end());
    minheapvector.push(3);
    minheapvector.push(4);
    minheapvector.push(110);
    minheapvector.push(9);
    minheapvector.push(14);
    minheapvector.push(-1);
    minheapvector.push(30);
    minheapvector.push(44);
    minheapvector.push(50);

    cout<<minheapvector.top()<<endl;
    return 0;

}