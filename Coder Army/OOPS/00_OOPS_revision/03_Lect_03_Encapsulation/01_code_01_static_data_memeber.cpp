#include<bits/stdc++.h>
using namespace std;

class Customer{

    string name;
    int account_number, balance;
    static int total_customer;

public:
    Customer(string name, int account_number){
        this->name = name;
        this->account_number = account_number;
        balance = 0;
        total_customer++;
    }
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }


};

int Customer :: total_customer = 0; 
int main(){
    Customer A1("ravikant", 450, 500);
    Customer A2("hero", 78);
    A1.display();
    A2.display();
}