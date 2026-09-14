#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    //creating the constructor
public:
    // Default Constructor

    //Paremeterised constructor
    Customer(string cust_name, int acc_no, int bal){
        name = cust_name;
        account_number = acc_no;
        balance = bal;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1;
    Customer A2("Ravikant",10045, 5000);
    A1.display();
    A2.display();

}