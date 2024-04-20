/*

- Constructor are special function and have same name as class.
- It initialize the objects of its class.

Features Of Constructors

.Declared in the public section, invoked automatically when objects are created.
.No return type, including void, and can't return values.
.Not inherited but can be called by derived class.
.Can have default arguments.
.Cannot be virtual or have addresses referred to.
.Objects with constructors (or destructors) can't be union members.
.Implicitly call operators new and delete for memory allocation.
.Mandatory for object initialization when declared.

*/

#include<iostream>
using namespace std;

int i;
class abc 
{
public:
    // Default Constructor
    abc()
    {
        // i = 89;
        // cout << "The value of i is :" << i << endl;
    }
    
    // Parameterized Constructor
    abc(int j, int k = 90) 
    {   
        // Constructor body initializes the object's state
        cout<<"The value of j is: "<<j<<endl;
        cout<<"The value of k is: "<<k<<endl;
    }

    // Static member function to display a message
    static void display()
    {
        cout<<"Member function inside constructor not allowed."<<endl;
    }
};

int main() 
{
    abc aa;
    abc bb(7), cc(77,88); // It initializes objects of class
    abc::display(); // Accessing static member function using scope resolution operator
}

