/*

In C++, a nested class is a class declared within another class. 
It's a member of the enclosing class and follows regular access rules. Enclosing class members don't have special access to nested class members, and vice versa. 
The nested class is considered a member of the enclosing class.

*/

#include<iostream>
using namespace std;

class A {
public:
//nested class
    class B 
    {
    private:
        int num = 78;
    public:
        void getdata() {
            cout << "The value of num is " << num << endl;
        }
    };

    class C : public B 
    {
    public:
        void fun() {
            cout << "Class C is inherited from Class B" << endl;
        }
    };
};

int main() {

    //we can't create a direct object of class B or C because both B and C are nested classes within class A, and they are not directly accessible outside of A.
    //nested classes are not in the global namespace; they are scoped within class A.
    A::B obj;
    obj.getdata();
    
    A::C cc;
    cc.fun();
    cc.getdata();
    
    return 0;
}
