#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;

    // creating the constructor
public:
    Customer(){
        name = "Rohit";
        account_number = 102;
        balance = 1000;
    }
    void display(){
        cout<<name<<" "<< account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1,A2,A3;
    A1.display();
    A2.display();
    A3.display();
}