#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance,account_number;

public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    };

    //deposit
    void deposit(int amount){
        if(amount>0){
            balance += amount;
            cout<<amount<< " Rs is credited successfully"<<endl;
        }
        
    }

    //withdraw
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<amount<< " Rs is debited successfully";
        }
        
    }
};

int main(){
    Customer C1("Rohit", 5000, 10);
    C1.deposit(100);
    C1.withdraw(6000);
}