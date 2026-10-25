#include<bits/stdc++.h>
using namespace std;


class Customer{
    string name;
    int acc_number, balance;
    static int customer_cnt;

public:
    Customer(string cust_name, int acc_num,int bal){
        name = cust_name;
        acc_number = acc_num;
        balance = bal;
        customer_cnt++;
    }

    void display(){
        cout<<name<<" "<<acc_number<<" "<<balance<<" "<<customer_cnt<<endl;
    }
};
int Customer :: customer_cnt = 0;
int main(){
    Customer A1("Ravikant", 450,500);
    Customer A2("Tanisha", 560,000);
    A1.display();
    A2.display();
}