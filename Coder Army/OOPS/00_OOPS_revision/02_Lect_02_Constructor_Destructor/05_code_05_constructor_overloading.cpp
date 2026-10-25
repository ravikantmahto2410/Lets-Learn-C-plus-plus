#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number,balance;

public:
    Customer(){ // default constructor
        name = "Jagdish";
        account_number = 500;
        balance = 780;
    }

    Customer(string cust_name, int acc_num,int bal){
        name = cust_name;
        account_number = acc_num;
        balance = bal;
    }

    Customer(string cust_name, int acc_num){
        name = cust_name;
        account_number = acc_num;
        balance = 0;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1;
    Customer A2("Bandariya",500,450);
    Customer A3("baba", 450);
    A1.display();
    A2.display();
    A3.display();
    
}