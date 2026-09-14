#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int * data;

public:
    Customer(string name){
        this->name = name;
        cout<<name<<endl;
    }
};

int main(){
    Customer A1("Harrier");
    Customer A2("Safari");
    Customer A3("Sierra");

}