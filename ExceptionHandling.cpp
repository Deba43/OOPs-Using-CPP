/*
An exception is a runtime issue that causes a program to terminate abruptly due to unexpected problems during execution.

In C++, `try` is used to wrap code that might throw exceptions, `catch` is used to handle those exceptions, and `throw` is used to raise an exception.

Multiple catch statements can be used to catch different type of exceptions thrown by try block.
*/
#include <iostream>
using namespace std;

int main() {
    
    int a[6] = {2, 0, 4, 6, 8, 10};
    int index1, index2;
    
    cout << "Enter array index1: ";
    cin >> index1;
    
    cout << "Enter array index2: ";
    cin >> index2;
    
    try {
        // throw exception if array out of bounds
        if (index1 >= 6 || index2 >= 6)
            throw "Error: Array index out of bounds!";
        
        // throw exception if denominator is 0
        if (a[index2] == 0)
            throw 0;

        // Division operation
        int result = a[index1] / a[index2];
        cout << "Result of division is: " << result << endl;
    }
    // catch "Array out of bounds" exception
    catch (const char* error) {
        cout << error << endl;
    }
    // catch "Divide by 0" exception
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }
    // catch any other exception
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }
    
    return 0;    
}
