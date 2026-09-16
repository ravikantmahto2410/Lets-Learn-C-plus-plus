#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    int age,weight;
};

class Student : public Human{ // this is derived class and deriving every variable as public from base class Human
    int roll_number, fees;
};

int main(){
    Student A;
    A.name = "Ravikant"; // name is not showing the red underline error as the name is public in base class, and so now we can inherit it in child class.and the derived class is also public so we can access the members of the base class without error
}