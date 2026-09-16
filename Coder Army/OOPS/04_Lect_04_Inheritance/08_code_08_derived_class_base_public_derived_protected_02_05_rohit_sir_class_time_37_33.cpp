#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    int age,weight;
};

class Student : protected Human{ // this is derived class and deriving every variable as public from base class Human
    int roll_number, fees;

public:
    void fun(string n, int a, int w){ // within the class we can access the members of the protected
        name = n;
        age = a;
        weight = w;
    }
    
    // we can also make the display function then also the code will be fine
    void display(){
        cout<<"name"<<" "<<age<<" "<<weight<<" ";
    }
};

int main(){
    Student A;
    A.fun("Ravikant",10,50); //since fun function is public so we can access it from anywhere;
    A.display();
}