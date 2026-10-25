#include<bits/stdc++.h>
using namespace std;

class Person{
protected:
    string name;

public:
    void introduce(){
        cout<<"Hello my Name is : "<<name<<endl;
    }
};

class Employee : public Person{
protected:
    int salary;

public:
    void monthly_salary(){
        cout<<"My Monthly Salary is : "<<salary;
    }
};

class Manager : public Employee{
public:
    string department;

    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;        
    }

    void work(){
        cout<<"I am leading the department"<<department<<endl;
    }
};

int main(){
    Manager A1("Bandariya", 200, "Finance");
    A1.monthly_salary();

}