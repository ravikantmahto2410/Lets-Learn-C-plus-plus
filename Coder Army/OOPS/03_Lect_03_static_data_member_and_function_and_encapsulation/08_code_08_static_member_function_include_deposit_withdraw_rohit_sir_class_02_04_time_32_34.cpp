
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
        cout<<"Total Number of Customer : "<<total_customer<<endl;
        cout<<"Total Balance in Our bank : "<<total_balance<<endl;
    }

    void deposit(int amount){ // function to deposit money
        if(amount > 0){
            balance += amount; // ye customer ka balance hai
            total_balance += amount; // this is total balance that SBI bank has
        }
    }

    void withdrawl(int amount){ /// function to withdraw money
        if(amount <= balance && amount > 0){
            balance -= amount;
            total_balance -= amount;

        }
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
    A1.deposit(10000);
    A2.withdrawl(5000);
    Customer :: accessstatic();
    // now lets deposit
    

}  