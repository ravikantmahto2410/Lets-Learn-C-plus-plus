#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    // constructor with data and next
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    //constructor with only data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
    // create an array
    vector<int>nums = {1,20,3,4,5};
    Node* y = new Node(nums[1]);
    // Print memory location of node
    cout << y << '\n';

    // Print data stored in node
    cout<<y->data;

}