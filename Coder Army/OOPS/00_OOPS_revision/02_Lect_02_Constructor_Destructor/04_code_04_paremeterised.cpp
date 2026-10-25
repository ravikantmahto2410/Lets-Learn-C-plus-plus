#include<bits/stdc++.h>
using namespace std;


class Customer{
    string name;
    int account_number,balance;

public:
    Customer(){ //Default constructor
        name = "Ravikant";
        account_number = 450;
        balance = 500;
    }
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
    Customer A1("prakaash", 450, 500);
    Customer A2("Nitin", 700, 450);
    A1.display();
    A2.display();

}