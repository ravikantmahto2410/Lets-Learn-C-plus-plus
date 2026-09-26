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

    Node(int data1){
        data  = data1;
        next = nullptr;
    }
};

int main(){
    vector<int>arr = {2,5,8,7};
    Node* y = new Node(arr[0]); 
    
    cout<<y->data<<endl; // if we declare the Node* y = new Node(arr[0],nullptr) like this then we have to write like y->data to print the data of the y
    cout<<y->next<<endl; // if we declare the Node* y = new Node(arr[0],nullptr) like this then we have to write like y->next to print the next of the y
    
}