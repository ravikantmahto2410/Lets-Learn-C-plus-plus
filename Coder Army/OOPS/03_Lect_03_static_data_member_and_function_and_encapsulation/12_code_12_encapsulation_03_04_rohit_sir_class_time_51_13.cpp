#include<bits/stdc++.h>
using namespace std;

class Customer{

    string name;
    int account_number, balance;
    int age;
public:
    
    Customer(string name, int account_number, int balance, int age){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount){ // function to deposit money
        if(amount > 0){
            balance += amount; // ye customer ka balance hai
        }
        else{
            cout<<"Invalid Amount"<<endl;
        }     
    }

    void updateage(int age){
        if(age > 0 && age < 100){
            this->age = age;
        }
        else{
            cout<<"Invalid Age"<<endl;
        }
    }

    void withdrawl(int amount){ /// function to withdraw money
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<" "<<endl;
    }
};

int main(){
    Customer A1("Ravikant",1021, 50000,24);
    Customer A2("Bandariya", 1452, 60000,25);
    Customer A3("Mohan",1500, 45000,28);
    A1.updateage(30);
    A1.deposit(-10); //The -10 will not get deposited as we are accessing the balance through the function which checks some condition
    A1.display();
}  