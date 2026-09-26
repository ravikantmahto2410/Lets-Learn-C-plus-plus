#include<bits/stdc++.h>
using namespace std;

class Engineer{
    void money(){
        cout<<"Hello Money : "<<endl;
    }
public:
    string sub_expert;

    void work(){
        cout<<"I have specialization in : "<<sub_expert<<endl;
    }

};

class Youtuber{
public:
    int subscribers;
    void contentcreator(){
        cout<<"I have a subscriber base of : "<<subscribers<<endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber{
public:
    string name;

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
    CodeTeacher A1("Ravikant", "c++", 500);
    A1.showcase();
    A1.money();
}