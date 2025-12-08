#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL; 
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
    
    
}

int prod(Node* root){
    if(root == NULL)return 1;
    return root->val * prod(root->left) * prod(root->right);
}


int main(){
    Node* a = new Node(15);
    Node* b = new Node(10);
    Node* c = new Node(8);
    Node* d = new Node(12);
    Node* e = new Node(20);
    Node* f = new Node(16);
    Node* g = new Node(25);

    a -> left = b;
    b->left = c;
    b->right = d;
    a->right = e;
    e->left = f;
    e->right = g;
    displayTree(a);
    cout<<endl;
    int totalProd = prod(a);
    cout<<totalProd<<endl;
}