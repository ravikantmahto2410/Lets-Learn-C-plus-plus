#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    vector<int>hp;
    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1) / 2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }

public:
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size() - 1);
    }
    int peek(){
        if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty(){

    }
    void display(){
        cout<<"[";
        for(int i = 0; i < hp.size(); i++){
            cout<<hp[i]<<" ";
        }
        cout<<"[";
    }
}
int main(){

}