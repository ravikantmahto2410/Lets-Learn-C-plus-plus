#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
    string name;
    int age,weight;

public:
    void work(){
        cout<<"I am working"<<endl;
    }

};

class Student : public Human{
    int roll_number,fees;

public:
    Student(string s_name, int s_age,int s_roll, int s_fees){
        name = s_name;
        age = s_age;
        roll_number = s_roll;
        fees = s_fees;
    }
};

int main(){
    Student A1("Ravikant", 24,35,450);
    A1.work();


}