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
    for(int i=1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int findLength(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr){
        
        temp = temp->next;
        cnt++;
        
    }
    return cnt;
}

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* removeHead(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeKthElem(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* temp = head;
    int cnt2 = 0;
    Node* prev = NULL;
    while(temp != nullptr){
        cnt2++;
        if(cnt2 == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        
        prev = temp;
        temp = temp->next;
        
    }
    return head;
}

Node* removeElembyValue(Node* head, int elem){
    if(head == NULL) return head;
    if(head->data == elem){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == elem){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;

    }
    return head;
}

Node* insertAtHead(Node* head, int value){
    Node* temp = new Node(value,head);
    return temp;
}

Node* insertAtTail(Node* head, int value){ 
    if(head == NULL){
        return new Node(value);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(value);
    temp->next = newNode;
    return head;
}

Node* insertPosition(Node* head, int elem, int k){
    if(head == NULL){
        if(k == 1){
            return new Node(elem);
        }
        else{
            return head;
        }
    }
    if(k == 1){// insertion at head
        Node* newHead = new Node(elem, head);
        return newHead;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(elem);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;

}


int main(){
    vector<int>arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);

    //now delete the tail  of linkedlist
    head = insertPosition(head,90,5);
    print(head);
  
}