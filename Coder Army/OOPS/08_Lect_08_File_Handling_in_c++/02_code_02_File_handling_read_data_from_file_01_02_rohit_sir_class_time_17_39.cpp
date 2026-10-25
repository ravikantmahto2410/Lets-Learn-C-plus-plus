#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin; // to read file we use ifstream fin is the name of object, we can give any name

    //File open karo
    fin.open("zoom.txt"); // in place of zoom.txt we can give the path of the file that we want to read. For now we want to read the zoom.txt file so have written this
    //File ko read karo

    char c;
    fin>>c;

    while(!fin.eof()){
        cout<<c;
        fin>>c;
    }
    fin.close();
}