#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
public:
    Customer(){
        name = "Ravikant";
        account_number = 12;
        balance = 450;
    }

    Customer(string cust_name, int account_num, int bal){
        name = cust_name;
        account_number = account_num;
        balance = bal;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1("Girish",450,200);
    Customer A2("Chameli", 566, 4100);
    A1.display();
    cout<<endl;
    A2.display();
}