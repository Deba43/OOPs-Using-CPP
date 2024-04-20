//Destructor in derived class
/*

-Constructor cann't be declared as virtual due to  at the time of constructor invocation, 
the virtual table required to resolve virtual function calls is not yet created, 
making it impossible for a virtual constructor to look up.

-Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., 
both base class and derived class destructors are called.

-Constructor in inheritance - constructor execute from parent to child but constructor call from child to parent
but in case of destructor it execute from child to parent.


*/

#include <iostream> 
using namespace std; 

class A 
{
public:
    A() {
        cout <<"Base class constructor" << endl;
    }
    virtual ~A() {
        cout <<"Base class destructor" << endl;
    }
};

class B : public A 
{
public:
    B() {
        cout << "Derived class constructor" << endl;
    }
    ~B() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    B *b = new B(); 
    A *a = b;
    delete a;
    //Segmentation fault due to derived class called last.
    //At this time base class isn't exist
    //delete b; 
    return 0;
}
