#include<bits/stdc++.h>
using namespace std;

class Node{ // if we use struct then we dont get OOPs features, it works same as struct but class adds the concept of OOPs
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

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=0; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
}

int main(){
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);

    //now traverse in linkedlist
    Node* temp  = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}