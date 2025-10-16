#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }

    void push(int val){

        if(idx == sizeof(arr)/sizeof(arr[0]) - 1){
            cout<<"Stack is Full"<<endl;
            return;
        }
        idx = idx + 1;
        arr[idx] = val;
    }

    int top(){
        if(idx == -1){
            cout<<" Stack is empty !"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void pop(){
        if(idx == -1){
            cout<<"Stack is empty !"<<endl;
            return;
        }
        idx = idx - 1;
    }

    int size(){
        return idx + 1;
    }

    void display(){
        for(int i = 0; i <= idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(15);
    st.push(7);
    st.push(8);
    st.display();
    st.pop();
    st.push(19);

    st.display();
    
    
    
}