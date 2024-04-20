/*

Base Class - A base class is also called parent class or super class.
             From a base class child class or sub class is inherited with all the properties of base class.
Derived Class - A derived class is also called child class or sub class.
                Derived class inherits all the properties of base class.

*/

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

//In single inheritance there is one single derived class which is inherited from single base class.

class Indian_Dance2: public Indian_Dance
{

     public:
     void Rouf()
    {
        cout<<"Rouf dance is from Kashmir."<<endl;
    }
};

int main()
{
    Indian_Dance2 d;
    d.Odissi();
    d.Garba();
    d.Rouf();

    return 0;
   
}