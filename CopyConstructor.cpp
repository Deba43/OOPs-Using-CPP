/*

- A copy constructor is a special type of constructor which is used to create a new object as a copy of an existing object. 
- It takes a reference to an object of the same class as its argument.

*/

#include <iostream>
using namespace std;

class Copy {
	int data;

public:
	// default constructor with zero body
	Copy() {}

	// parameterized constructor
	Copy(int d) 
    { 
        data = d; 
    }

	// copy constructor
	Copy(Copy& t)
     { 
        data = t.data; 
        cout<<"I'm Parametrized Constructor"<<endl;
     }

	void display()
     { 
        cout << "data = " << data; 
     }
};

int main()
{
	Copy obj(10);
	obj.display();//Parmeterized constructor called
	cout << endl;

	// copy constructor called
	Copy obj2(obj);
	obj2.display();

	return 0;
}
