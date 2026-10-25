#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    int age,weight;
};

class Student : protected Human{
    int roll_number, fees;

public:
    void fun(string n, int a, int w){
        name = n;
        age = a;
        weight = w;
    }
    void display(){
        cout<<name<<" "<< age<< " "<<weight<<endl;
    }
};

int main(){
    Student A;
    A.fun("Ravikant",25,57);
    A.display();
}