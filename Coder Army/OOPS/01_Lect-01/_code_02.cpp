#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int age, roll_number;
    string grade;

    //function getter and setter
public:
    void setname(string s){
        name = s;
    }
    void setage(int a){
        age = a;
    }
    void setroll_number(int r){
        roll_number = r;
    }
    void setgrade(string s){
        grade = s;
    }

};
int main(){
    Student S1;
    S1.setname("Ravikant");
    S1.setage(10);
    S1.setroll_number(35);
    S1.setgrade("A+");


}

// now whatever we have written above , our code will be successfully executed



