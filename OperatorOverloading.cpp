/*
Operator overloading is a compile-time polymorphism.

Operator functions in C++ can either be member functions (non-static) or friend functions. The distinction lies in their parameter list:
- Friend functions typically take one argument for unary operators and two for binary operators. 
  This is because they are not members of the class and thus do not have access to the object's implicit context.
- Member functions do not take any arguments for unary operators and take one argument for binary operators. 
  The object used to invoke the member function is implicitly passed and is accessible within the member function. 
  Arguments can be passed by value or by reference in both cases.

*/

//Unary Operator overloading

#include <iostream> 
using namespace std; 

class Base 
{ 
public: 
	int i = 9, j = 7; 

	void operator+() 
	{ 
		i++; 
		j++; 
		cout << "i: " << i << endl;
		cout << "j: " << j << endl;
	} 
}; 

int main() 
{ 
    Base b;//It works only with one class object
	+b; //this will activate opertor overloading
	return 0; 
}

//Binary Operator Overloading

#include <iostream> 
using namespace std; 

class Base 
{ 
public: 
	int i = 9, j = 7; 

	void operator+() 
	{ 
		++i; 
		++j; 
		cout << "i: " << i << endl;
		cout << "j: " << j << endl;
	} 
	
}; 

int main() 
{ 
    Base b;
    cout<<b.i+b.j;//Use of two operand
	return 0; 
}


