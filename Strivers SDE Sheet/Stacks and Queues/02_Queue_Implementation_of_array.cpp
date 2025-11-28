#include<bits/stdc++.h>
using namespace std;

class Q{
public:
    int * arr;
    int start, end, currSize, maxSize;
    Q(){
        arr = new int[16];
        start = -1;
        end = -1;
        currSize = 0;
        
    }
    Q(int maxSize){
        (* this).maxSize = maxSize;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }

    void push(int newElement){
        if(currSize == maxSize){
            cout<<"Queue is full"<<endl;
        }
        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end + 1) % maxSize;
        }
        arr[end] = newElement;
        currSize += 1;
    }

    int pop(){
        if(currSize == 0){
            cout<<"Queue is empty!"<<endl;
            exit(1);
        }
        int poppedElem = arr[start];
        if(currSize == 1){
            start = -1;
            end = -1;
        }
        else{
            start = (start + 1) % maxSize;
        }
        currSize -= 1;
        return poppedElem;
    }

    int top(){
        if(start == -1){
            cout<<"Queue is empty"<<endl;
            exit(1);
            
        }
        return arr[start];
    }
    int size(){
        return currSize;
    }
};
int main(){
    Q que(6);
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);
    cout<<que.top()<<endl;
    que.pop();
    cout<<que.top()<<endl;
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    cout<<que.size()<<endl;

}