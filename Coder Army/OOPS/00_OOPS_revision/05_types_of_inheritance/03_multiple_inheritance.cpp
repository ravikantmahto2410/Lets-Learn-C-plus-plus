#include<bits/stdc++.h>
using namespace std;

class Engineer{
public:
    string sub_expert;

    void work(){
        cout<<"Specialization in "<<sub_expert<<endl;
    }
};

class Youtuber{
public:
    int subscribers_cnt;

    void subscribers(){
        cout<<"I have Subscribers of"<<subscribers_cnt<<endl;
    }
};

class Codeteacher : public Engineer,public Youtuber{
public:
    string name;
    Codeteacher(string n, string exp, int subs){
        name = n;
        sub_expert = exp;
        subscribers_cnt = subs;
    }

    void showcase(){
        cout<<"My name is : "<<name<<endl;
        work();
        subscribers();
    }
};

int main(){
    Codeteacher A1("Ravikant", "c++", 450);
    A1.showcase();
}