/*

Hierarchical Inheritance - more than one child classes inherits the property of a single parent class. 

*/

//Example of two or more child classes derived from one base class.

#include<iostream>
using namespace std;
class Indian_Dance
{
    public:
    void Odissi()
    {
        cout<<"Odissi dance is from Odisha."<<endl;
    }
    void Garba()
    {
        cout<<"Garba dance is from Gujarat."<<endl;
    }

};

class Indian_Dance2: public Indian_Dance
{

     public:
     void Rouf()
    {
        cout<<"Rouf dance is from Kashmir."<<endl;
    }
     void Kuchipudi()
    {
        cout<<"Kuchipudi dance is from Andhra Pradesh."<<endl;
    }
};

class Indian_Dance3: public Indian_Dance
{

     public:
     void Bhangra()
    {
        cout<<"Bhangra dance is from Punjab."<<endl;
    }

    void Kathak()
    {
        cout<<"Kathak dance is from Uttar Pradesh."<<endl;
    }
};

int main()
{  
    Indian_Dance2 d;
    d.Odissi();
    d.Garba();
    d.Rouf();
    d.Kuchipudi();
    
    Indian_Dance3 d2;
    d2.Odissi();
    d2.Garba();
    d2.Bhangra();
    d2.Kathak();
    
    return 0;
   
}
