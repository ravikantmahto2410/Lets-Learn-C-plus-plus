
#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number, balance;
    

public:
    static int total_customer;
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_total_customer(){
        cout<<total_customer<<endl;
    }
};

int Customer :: total_customer = 0;

int main(){
    Customer A1("Ravikant",1021, 50000);
    Customer A2("bandariya", 1452, 60000);
    Customer A3("Mohan",1500, 45000);
    Customer :: total_customer = 5;
    A1.display_total_customer();

}  