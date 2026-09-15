#include<bits/stdc++.h>
using namespace std;

class Customer{
public:
    string name;
    int account_number, balance;


    
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount){ // function to deposit money
        if(amount > 0){
            balance += amount; // ye customer ka balance hai
        }      
    }

    void withdrawl(int amount){ /// function to withdraw money
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }
};

int main(){
    Customer A1("Ravikant",1021, 50000);
    Customer A2("bandariya", 1452, 60000);
    Customer A3("Mohan",1500, 45000);

    A1.balance += -10;
    A1.display();
}  