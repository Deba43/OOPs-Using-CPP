/*

- A copy constructor is a special type of constructor which is used to create a new object as a copy of an existing object.
- It takes a reference to an object of the same class as its argument.

*/

#include <iostream>
using namespace std;

class Copy
{
	int data;

public:
	// default constructor with zero body
	Copy() {}

	// parameterized constructor
	Copy(int d)
	{
		data = d;
		cout << "The value of data is:" << data << endl;
	}

	// copy constructor
	Copy(Copy &t)
	{
		data = t.data;
		cout << "I'm copy Constructor and my value is:" << data << endl;
	}
};

int main()
{
	Copy obj(10);//Parameterized Constructor called

	Copy obj2(obj);//Copy Constructor called

	return 0;
}
