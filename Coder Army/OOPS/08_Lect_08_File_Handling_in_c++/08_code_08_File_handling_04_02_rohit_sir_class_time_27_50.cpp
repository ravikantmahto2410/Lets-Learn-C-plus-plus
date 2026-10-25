#include<bits/stdc++.h>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India\n";
    fout<<"Hello Bandariya\n";
    fout<<"Hello Chomu\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();   
}