#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int * data;

public:
    Customer(string name){
        this->name = name;
        cout<<"Constructer of Object"<<name<<endl;
    }

    ~Customer(){
        cout<<"Destructer of Object"<<name<<endl;
    }
};
int main(){
    Customer A1("1");
    Customer A2("2");
    Customer A3("3");
}