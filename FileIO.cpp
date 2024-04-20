#include<iostream>
#include<fstream>
using namespace std;

int main() 
{   
    //fstream or ofstream object to write data into the file
    fstream File;
    //opening a file
    File.open("FileIO.txt", ios::out);//ios::out is used to write the data to file.

    
    if (!File) 
    {
        cout << "Error while creating/opening the file";
    }
    else 
    {
        cout << "File created successfully";
        //insertion (<<) operators to write data into a file
        File <<"Sunrisers openers Travis Head and Abhishek Sharma were on a powerplay record-breaking spree on Saturday as both produced an incredible and a never-seen-before batting mayhem against Delhi Capitals."<<endl;
        File<<"5+6 = 11";
    }

    File.close();
    
    ////ios::in is used to write the data to file.

    File.open("FileIO.txt", ios::in); 

    if (!File) 
    {
        cout << "Error while opening the file";
    }
    else 
    {
        cout << endl << "Contents of the file:" << endl;
        int a;
        // extraction (>>) operators to read data from a file
        while (File >> a) 
        { 
            cout << a; 
        }
    }
    //closing a file
    File.close();
    
    return 0;
}
