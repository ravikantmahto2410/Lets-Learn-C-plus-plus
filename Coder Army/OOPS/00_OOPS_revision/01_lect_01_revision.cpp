#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int roll_no, age;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Ravikant";
    S1.age = 24;
    S1.roll_no = 35;

    cout<<S1.age<<endl;
}