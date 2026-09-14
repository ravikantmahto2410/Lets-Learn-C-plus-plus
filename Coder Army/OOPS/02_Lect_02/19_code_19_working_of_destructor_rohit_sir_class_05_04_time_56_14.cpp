#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int * data;

public:
    Customer(){
        name = "Rohit";
        data  = new int;
        *data = 10;
        cout<<"Constructor is called"<<endl;
    }

    ~Customer(){
        delete data;
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Customer A1;
}