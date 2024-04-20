/*

A friend class can access private and protected members of other classes in which it is declared as a friend. 
It is sometimes useful to allow a particular class to access private and protected members of other classes.

*/

#include <iostream>
using namespace std;

class A {
private:
    int i = 9;

protected:
    int j = 6;

public:
    int k = 8;
    
    friend class F;
};

class F {
public:
    void sum(A& t) {
        cout << "The value of i + j = " << t.i + t.j << endl;
        cout<<"The value of k is : "<<t.k;
    }
};

int main() {
    A a;
    F f;
    f.sum(a);
    return 0;
}
