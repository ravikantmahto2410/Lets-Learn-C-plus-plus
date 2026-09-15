
#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

public:
    
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    static void accessstatic(){ // this functio is our static member function
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_total_customer(){
        cout<<total_customer<<endl;
    }
};

int Customer :: total_customer = 0;
int Customer :: total_balance = 0;

int main(){
    Customer A1("Ravikant",1021, 50000);
    Customer A2("bandariya", 1452, 60000);
    Customer A3("Mohan",1500, 45000);
    Customer :: accessstatic();
    A1.display_total_customer();

}  