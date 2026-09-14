#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    //creating the constructor
public:
    Customer(){
        name = "Rohit";
        account_number = 5;
        balance = 1000;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    Customer A1;
    A1.display();
}