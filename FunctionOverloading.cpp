/*

- In Function Overloading two or more functions have same name with different parameters.
- Function Overloading enhances the clarity and organization of code.
- Function Overloading comes under Compile time polymorphism.

*/

#include<iostream>
using namespace std;

class myClass{

    public:
    void fun()
    {
        int i = 89;
        cout<<"The value of i is:"<<i<<endl;
    }
    //Function Overloading with different parameter
    void fun(int k, char c) 
    {
        cout<<"I am function overloading with formal parameter."<<endl;
        cout<<"The value of k is:"<<k<<endl;
        cout<<"The value of c is:"<<c<<"\n"; 

    }
    void fun(int a, int b = 89)
    {
        cout<<"I am function overloading with default parameter"<<endl;
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;

    }
    void he(int c, int d = 67)
    {
        cout<<"I'm not function Overloading"<<endl;
        cout<<"Overriding the default value"<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;

    }

};

int main(){
    myClass f;
    f.fun();
    f.fun(4, 'r');//actual parameter
    f.fun(5);
    //the below code will override the value of d
    f.he(6, 56);
    return 0;
} 
