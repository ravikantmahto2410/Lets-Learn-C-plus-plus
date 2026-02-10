#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int age, roll_number;
    string grade;
};


int main(){
    Student *S = new Student;   // student ke barabar memory S mein allocate kara do uska 
    (*S).name = "Rohit";
    (*S).age = 15;
    (*S).roll_number = 01;
    (*S).grade= "A+";
    // the dynamic memory allocation has happend, 
    // NOw we can Print

    //(*S).name = "Rohit"  can also be written as  S->name = "Rohit" , see below how I can print this
    cout<<S->name<< " "<<endl;
}