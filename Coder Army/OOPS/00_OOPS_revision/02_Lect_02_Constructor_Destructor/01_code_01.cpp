#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

public:
    Customer(){
        name = "Ravikant";
        account_number = 456;
        balance = 200;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance;
    }
};
int main(){
    Customer A1;
    A1.display();
}