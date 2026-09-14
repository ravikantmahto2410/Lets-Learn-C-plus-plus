#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int *data;

public:
    Customer(){
        cout<<"Constructor is called"<<endl;
    }

    ~Customer(){
        cout<<"Destructor is called";
    }
};

int main(){
    Customer A1;
}