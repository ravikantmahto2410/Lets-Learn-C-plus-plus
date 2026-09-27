#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1){
        data = data1;
        next = next;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* insertBeforeValue(Node* head, int x, int value){
    if(head->next == NULL){
        if(head->data == x){
            Node* newNode = new Node(value);
            newNode->next = head;
            return newNode;
        }
        
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == x){
            Node* newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}

int main(){
    vector<int> arr = {3,1,5,8};
    Node* head = convertArr2LL(arr);
    print(head);

    head = insertBeforeValue(head, 8, 90);
    print(head);
}