#include<bits/stdc++.h>
using namespace std;

class Human{
private:
    int a;
protected:
    int b;
public:
    int c;
};

int main(){
    Human Rohit;
    Rohit.a = 10;   // a showing error as it is not accessible here since a is private;
    Rohit.b = 10; //  b is also showing error since it is also not accessible here since b is protected so it will give error
    Rohit.c = 10; // c is not showing red line as it  is accessible here since a is public , so it will not give error
}