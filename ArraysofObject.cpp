/*

An array of objects can be used if there is a need to store data of more than one object. 
In an array of objects, the data can be accessed randomly by using the index number.

*/

//Example 1
#include<iostream>
using namespace std;

class BaseClass 
{
public: 
    virtual void Display()
    {
        cout << "Display function of Base" << endl;
    }
};

class DerivedClass_1 : public BaseClass 
{
public:
    void Display() {
        cout << "Display function of Derived class 1" << endl;
    }
};

class DerivedClass_2: public BaseClass 
{
public:
    void Display() {
        cout << "Display function of Derived class 2" << endl;
    }
};

int main() 
{
    BaseClass* Obj[2];//Array of pointer of object
    DerivedClass_1 obj1;
    DerivedClass_2 obj2;

    Obj[0] = &obj1;
    Obj[0]->Display();

    Obj[1] = &obj2;
    Obj[1]->Display();

    return 0;
}

//Example 2

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
};

int main()
{
    Indian_Dance2 d[2];//Array of object
    d[0].Odissi();
    d[1].Garba();
    d[2].Rouf();

    return 0;
   
}
