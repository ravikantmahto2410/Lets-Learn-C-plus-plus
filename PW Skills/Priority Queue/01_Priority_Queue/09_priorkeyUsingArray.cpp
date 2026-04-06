#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    priority_queue<int>maxhparray(arr, arr + 9);

    cout<<maxhparray.top()<<endl;

    return 0;
}