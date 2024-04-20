/*
 In C++, a virtual function serves as a placeholder without a task. 
 When a virtual function lacks a definition, it's termed a "do-nothing" function or a pure virtual function.
 These functions lack implementation in the base class and make it abstract. 
 Classes containing pure virtual functions cannot be instantiated and are termed abstract base classes. 
 The primary role of a base class is to define traits for derived classes and create base pointers for achieving runtime polymorphism.

*/
#include<iostream>
using namespace std;

//Abstract base class
class Fun
{   
    public:
    //do nothing function
    virtual void play() = 0;
};

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
    Fun *ptr;
    
    Fun_2 f2;
    Fun_3 f3;
//you cann't create base class object due virtual nature of base class, it only exist in virtually.
    
    ptr = &f2;
    ptr->play();
    
    ptr = &f3;
    ptr->play();
    
    return 0;
}
