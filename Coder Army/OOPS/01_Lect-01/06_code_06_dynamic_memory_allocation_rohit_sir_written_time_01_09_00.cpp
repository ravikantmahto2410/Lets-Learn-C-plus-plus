#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age, roll_number;
    string grade;
};

int main(){
    Student *S = new Student;
    (*S).name = "Rohit"; // we can also write this line as S->name = "Rohit"
    (*S).age = 24;  // we can also write this line as S->age = 24
    (*S).roll_number = 53; // we can also write this line as S->roll_number = 53
    S->grade = "A+"; // we can also write this line as (*S).grade = 24

    cout<<S->grade<<endl;
    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->grade<<endl;
}