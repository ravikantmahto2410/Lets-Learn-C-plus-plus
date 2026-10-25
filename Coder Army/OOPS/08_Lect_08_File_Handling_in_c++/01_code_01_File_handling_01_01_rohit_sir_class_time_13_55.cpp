#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // To Open File or simply If File ko open Karna hai
    ofstream fout; //here we created the object of ofstream class
    fout.open("zoom.txt");  // in place of zoom.txt we have to pass the location of file that we want to open , if file is found then it will open that file , if it does not find the file with that name then , it will create the file with that name in the same directory, here for example zoom.txt is not present so this will create the file first then it will open that file
    // File mein write kar sakta hun
    fout<<"Hello India";

    fout.close();  // this fout.close() will close the file and release the resources that may have been in use
}