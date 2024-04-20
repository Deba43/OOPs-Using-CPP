/*
A freind function can give special access to private and protected members of a class.
They are non-member functions that can access and manipulate the private and protected members of class for they are declared as friends.

*/
#include <iostream>
using namespace std;

class A 
{
private:
    int i = 9;

protected:
    int j = 6;

public:
    int k = 8;

    friend void base(A&);
};

void base(A& t) 
{
    cout << "The value of i + j = " << t.i + t.j << endl;
    cout << "The value of k is : " << t.k << endl;
}

int main() 
{
    A a;
    base(a);
    return 0;
}
