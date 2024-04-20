/*

- In Function Overriding we can override base class method in a child class.
- Function can't override multiple times like function overloading.
- Runtime Polymorphism achieved by Function Overriding.

*/

#include<iostream>
using namespace std;

class Fun
{   
    public:
      void play()
     //virtual void play()
    {
        cout<<"Playing in Fun_1"<<endl;
    }
};

//Multiple Inheritance

class Fun_2:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_2"<<"\n";
    }
};
class Fun_3:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_3"<<endl;
    }
};

int main()
{   
    
    Fun f1;
    Fun_2 f2;
    Fun_3 f3, f4;
    f1.play();
    f2.play();
    f3.play();
    
    //Access of Overridden Function to the Base Class through scope resolution operator
    f4.Fun::play();
    
    //Call Overridden Function Using Pointer
    Fun *f = &f2;
    f->play();
    //Here the pointer is of parent class but it is addressing to base class(Fun_2) 
    //so it should call the base class(Fun_2) method but it will call the parent method as parent method is not virtual.
}