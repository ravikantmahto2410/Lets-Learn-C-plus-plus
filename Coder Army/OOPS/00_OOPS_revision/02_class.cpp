#include<bits/stdc++.h>
using namespace std;

class Student{

    string name;
    int age, roll_number;
    string grade;
public:
    void setName(string sname){
        name = sname;
        
    }
    void setAge(int n){
        age = n;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }

};

int main(){
    Student S1;
    S1.setName("Ravikant");
    S1.setAge(25);
    S1.display();



}