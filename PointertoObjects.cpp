/*
Pointer is a derived data type that refers to another data variable
by storing the variable's memory rather than data.

*/
#include<iostream>
using namespace std;

class BaseClass {
public: 
    virtual void Display() {
        cout << "Display function of Base" << endl;
    }
};

class DerivedClass_1 : public BaseClass {
public:
    void Display() {
        cout << "Display function of Derived class 1" << endl;
    }
};

class DerivedClass_2 : public BaseClass {
public:
    void Display() {
        cout << "Display function of Derived class 2" << endl;
    }
};

int main() {
    BaseClass* Obj;
    DerivedClass_1 obj1;
    DerivedClass_2 obj2;

    Obj = &obj1;//base class pointer pointing to derive class object
    Obj->Display();
    
    Obj = &obj2;//base class pointer pointing to derive class object
    Obj->Display();

    return 0;
}
