#include<bits/stdc++.h>
using namespace std;

//study
//boy
//girl
//male
//female

class Student{
public:
    void print(){
        cout<<"I am student"<<endl;
    }
};

class Male{
public:
    void maleprint(){
        cout<<"I am a Male"<<endl;
    }
};

class Female{
public:
    void femalprint(){
        cout<<"I am a female"<<endl;
    }
};

class Boy : public Student, public Male{
public:
    void Boyprint(){
        cout<<" I am Boy"<<endl;
    }
};

class Girl : public Student, public Female{
public:
    void girlprint(){
        cout<<" I am Girl"<<endl;
    }
};



int main(){
    Girl G1;
    G1.girlprint();
}