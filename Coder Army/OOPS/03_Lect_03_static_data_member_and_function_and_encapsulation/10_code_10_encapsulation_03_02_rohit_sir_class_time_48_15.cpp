#include<bits/stdc++.h>
using namespace std;

class Customer{

    string name;
    int account_number, balance;
public:
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount){ // function to deposit money
        if(amount > 0){
            balance += amount; // ye customer ka balance hai
        }
        else{
            cout<<"Invalid Amount"<<endl;
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
    Customer A2("Bandariya", 1452, 60000);
    Customer A3("Mohan",1500, 45000);

    A1.deposit(-10); //The -10 will not get deposited as we are accessing the balance through the function which checks some condition
    A1.display();
}  