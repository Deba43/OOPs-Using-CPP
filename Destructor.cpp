/*

A destructor is a member function in C++ with the same name as the class, preceded by a tilde (~). 
It's used to destroy objects created by constructors, releasing memory and resources.
Destructors don't take arguments or return values. 
They're automatically invoked by the compiler when objects go out of scope, releasing inaccessible memory. 
Declaring destructors is a good practice to manage memory effectively.
Destructor  cannot be declared as static and const.
Destructor should be declared in the public section of the program.
Destructor is called in the reverse order of its constructor invocation.

*/

#include <iostream>
using namespace std;

class Dest{
public:
	Dest()
	{
		cout << "I'm Constructor"<< endl;
	}
    
    //Destructor
	~Dest()
	{
		cout << "I'm destructor "<<endl;
		 
	}
};

int main()
{
	Dest s, s2;
	return 0;
}
