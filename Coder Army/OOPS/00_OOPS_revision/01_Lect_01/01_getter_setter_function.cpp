#include<bits/stdc++.h>
using namespace std;


class Student{
    string name;
    int age, roll_number;
    string grade;

public:
    void setname(string sname){
        name = sname;
    }
    void setage(int n){
        age = n;
    }
    void setroll(int roll){
        roll_number = roll;
    }
    void setgrade(string gradescore){
        grade = gradescore;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;

    }
    void getroll(){
        cout<<roll_number<<endl;
    }
    void getscore(){
        cout<<grade<<endl;
    }
};

int main(){
    Student S1;

    S1.setname("ravikant");
    S1.setage(25);
    S1.setgrade("A+");
    S1.setroll(35);

    S1.getname();
    S1.getage();
    S1.getroll();
    S1.getscore();
}