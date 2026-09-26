#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age, roll_number;
    string grade;

    // since the class Student has access modifier as private so to store or access the data members of this class form outside we have to use the getter and setter function

public:
    void setname(string s){ // this function will set the name that we want to store
        if(s.size() == 0){
            cout<<"Invalid name";
            return;
        }
        name = s;
    }
    void setage(int a){ // this function will set the name that we want to store
        if(age < 0 || age > 100){
            cout<<"Invalid age";
            return;
        }
        age = a;
    }
    void setroll_number(int roll){ // this function will set the name that we want to store
        roll_number = roll;
    }
    void setgrade(string s){ // this function will set the name that we want to store
        grade = s;
    }

    void getname(){ // this function will print whatever name is passed
        cout<<name<<endl;
    }
    void getage(){ // this function will print whatever age is passed
        cout<<age<<endl;
    }
    int getroll_number(){
        return roll_number;
    }

    string getgrade(int pin){
        if(pin == 123){
            return grade;
        }
        return " ";
    }

};

int main(){
    Student S1;
    S1.setname("Ravikant");
    S1.setage(10);
    S1.setroll_number(21);
    S1.setgrade("A+");
    S1.getname();
    S1.getage(); 
    cout<<S1.getroll_number()<<endl;
    cout<<S1.getgrade(12);
}