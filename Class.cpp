//Structure of Class

/*

- Class is a collection of data members and member Functions.

- By default data members are private in nature, if member functions are private we can't access the data member inside the class.

- The body of class is defined inside the curly brackets and terminated by a semicolon at the end.

- One class is defined no memory is a located. To use the data and access functions defined in the class we need to create objects.

- Class does not create any objects just as int doesn't not create any variables.



*/
#include <iostream>

using namespace std;

class abc
{ 
    int i = 34; //Data member private in nature

    public: //access specifier

    //Public member function to access data member as it is private in nature
    void fun() 
    {
        cout<<"The value of i is: "<<i<<endl;
    }
};

int main()
{   
    //One class can have more than one object
    abc a, b; //object of class
    a.fun();
    b.fun();

    return 0;
}