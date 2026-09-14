#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    //creating the constructor
public:
    // Default Constructor
    Customer(){
        name = "Rohit";
        account_number = 53;
        balance = 2000;
    }
    //Paremeterised constructor
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
 
    Customer(string a, int b){
        name = a;
        account_number = b;
    }

    
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    //creating the copy constructer by ourself

    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main(){
    Customer A1;
    Customer A2("Ravikant",10045, 5000);
    Customer A3("Mohit",25);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();

}