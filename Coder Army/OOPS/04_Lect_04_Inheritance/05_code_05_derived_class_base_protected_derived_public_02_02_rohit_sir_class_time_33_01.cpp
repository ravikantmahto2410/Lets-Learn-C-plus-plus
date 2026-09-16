#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
    string name;
    int age,weight;
};

class Student : public Human{ // this is derived class and deriving every variable as public from base class Human
    int roll_number, fees;
};

int main(){
    Student A;
    A.name = "Ravikant"; // name is showing the red underline error as the name is protected in base class, and so now we can inherit it in child class but protecte is more powerful so the derived class Student is considering it as protected are not allowed to access from outside of the class
}