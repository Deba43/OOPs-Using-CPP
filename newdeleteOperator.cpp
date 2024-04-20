/*

Dynamic memory allocation, handled through heap memory, contrasts with the automatic allocation of memory for normal variables. 
While non-static and local variables are allocated on the stack and managed automatically, dynamic memory allocation allows programmers to allocate and deallocate memory as needed during runtime. 
However, it's crucial for the programmer to manually deallocate memory allocated dynamically to avoid memory leaks. C++ provides new and delete operators to facilitate this process, enabling efficient allocation of memory, particularly when variable sizes are unknown or varying.

*/
//----Example 1
#include<iostream>

using namespace std;

int main()
{
    
int *i;
i = new int;
*i = 87;

cout<<*i;

delete i;
}

//----Example 2
#include<iostream>

using namespace std;

class tests 
{

public:

tests() {

cout<<"Good"<<endl;

}

~tests()
{

cout<<"Morning"<<endl;

}

};


int main() 
{

tests*t = new tests[3];

delete [] t;//Deallocation of dynamic memory

return 0;

}