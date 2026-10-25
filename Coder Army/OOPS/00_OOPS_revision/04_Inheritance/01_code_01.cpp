#include<bits/stdc++.h>
using namespace std;

class Human{ // base class
public:
    string name;
    int age,weight;
};

class Student : public Human{ // derived class
    int roll_number, fees;

};


int main(){
    Student A1;
    A1.name = "Ravikant";
}