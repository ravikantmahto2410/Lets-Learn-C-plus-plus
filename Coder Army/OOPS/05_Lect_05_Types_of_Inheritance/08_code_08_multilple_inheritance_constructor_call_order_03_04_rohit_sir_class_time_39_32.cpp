#include<bits/stdc++.h>
using namespace std;

class Engineer{
    void money(){
        cout<<"Hello Money : "<<endl;
    }
public:
    string sub_expert;

    Engineer(){
        cout<<"Constructor of Engineer is called, then"<<endl;
    }
    void work(){
        cout<<"I have specialization in : "<<sub_expert<<endl;
    }

};

class Youtuber{
public:
    int subscribers;

    Youtuber(){
        cout<<"Constructor of Youtuber is called, then"<<endl;
    }
    void contentcreator(){
        cout<<"I have a subscriber base of : "<<subscribers<<endl;
    }
};

class CodeTeacher : public Youtuber, public Engineer {  // the order in which the parent class consructor will be called depends on the order in which it is geting inherited or written in derived class,
public:
    string name;

    CodeTeacher(){
        cout<<"Constructor of CodeTeacher is called"<<endl;
    }

    CodeTeacher(string name, string sub_expert, int subscribers){
        this->name = name;
        this->sub_expert = sub_expert;
        this->subscribers = subscribers;

    }
    void showcase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    }
};

int main(){
    CodeTeacher A1;
    
}