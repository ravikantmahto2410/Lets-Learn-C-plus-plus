#include<bits/stdc++.h>
using namespace std;

class Student{   // class is created or user defined data type is created
public:  
    string name;
    int age, roll_number;
    string grade;
};

int main(){
    // now suppose we are going to store the data of the student 1,
    // then to access name, age , roll_number, grade we write like this

    Student s1;  // here Student is a data type that is User Defined Data Type and s1   is a object;
    s1.name = "Ravikant";  // we are accessing the variable name , and storing the name of the student
    s1.age = 10;
    s1.roll_number = 2183;
    s1.grade = "A+";
    
}