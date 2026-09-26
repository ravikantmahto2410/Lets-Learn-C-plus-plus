#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void speak(){
        cout<<"HuHu"<<endl;
    }
};

class Dog : public Animal{
public:
    void speak(){
        cout<<"Bark"<<endl;
    }
    
};

int main(){
    Animal *p;// p is a pointer pointing to class Animal at compile time
    p = new Dog();// p is a pointer pointing to class Dog at run time, the memory address of Dog is allocated at runtime
    p->speak(); // since att compile time p is pointing to Animal so this will print HuHu
}