#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int>arr = {2,5,8,7};
    Node y = Node(arr[0], nullptr);  // here we are techinally just creating an object , where arr[0] = 2 and nullptr
    //cout<<y; //if we write only cout<<y; it will throw an error becaue y is just an object
    //If we want to print something we have write like this
    cout<<y.data<<endl;
    cout<<y.next<<endl;
    
}