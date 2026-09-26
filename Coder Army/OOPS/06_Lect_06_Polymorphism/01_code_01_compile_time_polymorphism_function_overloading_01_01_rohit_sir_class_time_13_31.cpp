#include<bits/stdc++.h>
using namespace std;

class Area{
public:
    int calculateArea(int r){ //this will calculate area of circle
        return 3.14 * r * r;
    }
    int calculateArea(int l, int b){////this will calculate area of rectangle
        return l * b;
    }
};

int main(){
    Area A1;
    cout<<A1.calculateArea(4)<<endl; //this will call function of circle
}
