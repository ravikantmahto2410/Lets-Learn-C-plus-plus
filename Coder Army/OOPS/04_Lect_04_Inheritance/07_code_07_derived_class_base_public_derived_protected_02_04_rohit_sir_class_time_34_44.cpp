#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    int age,weight;
};

class Student : protected Human{ // this is derived class and deriving every variable as public from base class Human
    int roll_number, fees;
};

int main(){
    Student A;
    A.name = "Ravikant"; // name is showing the red underline error as the name is public in base class, and so now we can inherit it in child class.But the derived class is Protected and so the derived class treating name as protected so we can't access the protected member from the outside of the class.
}