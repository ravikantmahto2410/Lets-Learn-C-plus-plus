#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void speak(){
        cout<<"Huhu"<<endl;
    }
};

class Dog : public Animal{
public:
    void speak(){
        cout<<"bark";
    }
};
int main(){
    Animal *p;
    p = new Dog();
    p->speak();

}