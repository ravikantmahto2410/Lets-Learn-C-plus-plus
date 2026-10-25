#include<bits/stdc++.h>
using namespace std;

class Person{
protected:
    string name;

public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }
};

class Employee : public Person{
protected:
    int salary;

public:
    void income(){
        cout<<"My Salary is"<<salary<<endl;
    }

};

class Manager : public Employee{
public:
    string department;

    Manager(string e_name, int sal,string dept){
        name = e_name;
        salary = sal;
        department = dept;
    }
    void display(){
        cout<<"Leading the department "<<department<<endl;
    }
};

int main(){
    Manager A1("ravikant",450,"IT");
    A1.display();
}