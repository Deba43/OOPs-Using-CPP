/*

Multilevel Inheritance - one class inherits another class it is further inherited by another class.

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

class Indian_Dance3: public Indian_Dance2
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
    Indian_Dance3 d;
    d.Odissi();
    d.Garba();
    d.Rouf();
    d.Kuchipudi();
    d.Bhangra();
    d.Kathak();
    
    return 0;
}