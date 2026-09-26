#include<bits/stdc++.h>
using namespace std;

class Area{
public:
    int calculateArea(int r){ // It will calculate area of Circle
        return 3.14*r*r;
    }

    int calculateArea(int l, int b){// it will calculate area of Rectangle
        return l*b;
    }
};

int main(){
    Area A1,A2;
    cout<<A1.calculateArea(4)<<endl;//this willl call the calculateArea fun of circle
    cout<<A2.calculateArea(3,4)<<endl; //this will call calculate area of rectangle
    cout<<A2.calculateArea("Ravikant"); //This will give the compile time error
}
