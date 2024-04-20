/*

Private Inheritance:

Private inheritance transforms the public and protected members of the base class into private members within the derived class. 
It's a strategy employed when the derived class seeks to utilize the internal workings of the base class without disclosing them externally. 
While the derived class retains access to the base class's members, they are constrained to private visibility, inaccessible to instances of the derived class or any other classes.

Protected Inheritance:

Protected inheritance involves the elevation of public and protected members from the base class to protected status within the derived class. 
This form of inheritance, though less prevalent, occupies a niche with specific applications. It establishes an intermediary level of accessibility between private and public inheritance. 
In this scenario, both the derived class and its subsequent derivatives can access the protected members of the base class. However, such members remain inaccessible to instances of the derived class or any unrelated classes.

Public Inheritance:

Public inheritance entails the transition of public members from the base class to public members in the derived class, while protected members maintain their protected status. 
This widely adopted inheritance type signifies an "is-a" connection between the base and derived classes. Public members of the base class are accessible to the derived class and any other classes, emphasizing their versatility. 
Conversely, access to protected members is restricted to the derived class and its subsequent derivatives, ensuring encapsulation and controlled inheritance hierarchy.

*/
#include<iostream>
using namespace std;

class GrandFather
{
private:
    void Pension()
    {
        cout << "Pension is 45000" << endl;
    }
protected:
    void Medicine()
    {
        cout << "Medicine price is 5000" << endl;
    }
public:
    void Roomrent()
    {
        cout << "Roomrent is 5000" << endl;
    }
    // function to access private member
    void P()
    {
        Pension();
    }
};

class Father : public GrandFather
{
public:
    void display()
    {
        Roomrent();
        Medicine();
    }
};

class Child : protected GrandFather
{
public:
    void display()
    {
        Roomrent(); 
        Medicine();
    }
};

class GreatgrandChild : private GrandFather
{
public:
    void display()
    {
        Roomrent();
        Medicine();
    }
};

int main()
{
    Father f;
    f.display();
    f.P(); 

    Child c;
    c.display();
    // c.Roomrent(); // Cannot access protected member directly outside of Child
    // c.P(); // Cannot access private member directly outside of GrandFather

    GreatgrandChild g;
    g.display();
    // g.Roomrent(); // Cannot access private member directly outside of GrandFather
    // g.P(); // Cannot access private member directly outside of GrandFather

    return 0;
}
