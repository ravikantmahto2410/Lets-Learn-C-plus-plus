#include<bits/stdc++.h>
using namespace std;

class Human{
    string name;
    int age,weight;
};

class Student : public Human{ // this is derived class and deriving every variable as public from base class Human
    int roll_number, fees;
};

int main(){
    Student A;
    A.name = "Ravikant"; // name is showing the red underline error as the name is private in base class, and so we can't inherit it in child class so we are not able to access the name variable
}