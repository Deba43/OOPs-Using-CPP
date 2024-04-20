#include <iostream>
using namespace std;

// T is a template argument that accepts different built-in data types.
// Class Template
template <class T>
class Test {
    T a; // Missing semicolon here
public:
    Test(T x) {
        a = x;
    }
    void show() {
        cout << a << "\n";
    }
};

int main() {
    // calling with float parameters
    Test<float> test(10.5);
    // calling with int parameters
    Test<int> tt(10);
    test.show();
    tt.show();
    return 0;
}
