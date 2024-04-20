#include<iostream>
using namespace std;

template<class T>
int base(T x)
{   
    
    cout<<"I am template function "<<"\n";
    cout<<x<<endl;
}
//Template function overloading with a non-type template parameter

int base(int x)
{
    cout<<"I am non type template function"<<"\n";
}
int main()
{   
    // calling with int parameters
    base(45);
    // calling with float parameters
    base(10.5);
    base("A");
    return 0;
}