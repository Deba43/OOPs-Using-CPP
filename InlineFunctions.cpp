/*
Using macros as a replacement for functions in C++ is discouraged due to several drawbacks. Macros lack access to private class members, appear as function calls but operate differently, and are prone to errors. 
Instead, C++ offers inline functions to mitigate the overhead of frequent function calls. Inline functions are expanded directly where invoked, akin to macros, but are managed by the C++ compiler. 
However, excessive use of inline functions can increase program size and potentially lead to cache inefficiency. Therefore, a balance must be struck between reducing function call overhead and managing program size.

The C++ compiler can't inline virtual functions because their resolution occurs at runtime, contrary to inline functions, resolved at compile-time. 
Inlining is effective only when function call overhead surpasses execution time.
*/
#include<iostream>
using namespace std;
class Addition
{ 
 int i, j;
 public:
 void add();
 void sub();
};

inline void Addition ::add()
{
    cout << "Enter first value:";
    cin >> i;
    cout << "Enter second value:";
    cin >> j;

    cout<<"Addition of i and j is : "<<i+j<<endl;
}
inline void Addition ::sub()
{
    cout<<"Subtraction of i and j is : "<<i-j<<endl;
}

int main()
{
    Addition a;
    a.add();
    a.sub();
}

