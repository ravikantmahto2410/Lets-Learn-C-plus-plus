#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
    string name;
    int age;

public:

    Human(){
        cout<<"Hello Human Class Constructor"<<endl;

    }
    void work(){
        cout<<" I am working"<<endl;
    }
};

class Student : public Human{
    int roll_number, fees;

public:
    Student(){
        cout<<"Hello Student Class Constructor"<<endl;
    }
};

int main(){
    Student A1;

    
}