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
    Customer(string cust_name, int acc_no, int bal){
        name = cust_name;
        account_number = acc_no;
        balance = bal;
    }
    Customer(string a, int b){
        name = a;
        account_number = b;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1;
    Customer A2("Ravikant",10045, 5000);
    Customer A3("Mohit",25);
    A1.display();
    A2.display();
    A3.display();

}