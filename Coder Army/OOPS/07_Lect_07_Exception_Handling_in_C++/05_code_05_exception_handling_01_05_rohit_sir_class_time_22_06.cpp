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
        if(amount <= 0){
            throw "Amount should be greater than 0";
        }
        // If line of throw keyword gets executed then te lines after that will be not be executed
        balance += amount;
        cout<<amount<< " Rs is credited successfully"<<endl;
  
    }
    //withdraw
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<amount<< " Rs is debited successfully";
        }
        else if (amount < 0){
            throw "Amount should be greater than 0";
        }
        else{
            throw "Your balance is low";
        }
    }
};
int main(){
    Customer C1("Rohit", 5000, 10);
    try{
        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100);   // This line is not executed because the 
    }
    catch(const char *e){
        cout<<"Exception Occurred:"<<e<<endl;  
    }
    
}