#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number, balance, age;

public:
    Customer(string name, int account_number,int balance,int age){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    void updateage(int person_age){
        if(age > 0 && age < 100){
            this->age = age;
        }
        else{
            cout<<"Invalid Age"<<endl;
        }
    }

    void withdrawl(int amount){
        if(balance >= amount && amount > 0){
            balance -= amount;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }
};
int main(){
    Customer A1("Ravikant", 545,500,50);
    Customer A2("bandariya", 454,210,55);
    A1.display();
    A2.display();
    A1.withdrawl(500);
    A1.display();
}