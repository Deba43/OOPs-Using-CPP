//At last you will find virtual function example.
//Before procedding to virtual function let us see the below example of Function Overriding.

//Function Overriding example
#include<iostream>
using namespace std;

class Fun
{   
    public:
     void play()
    {
        cout<<"Playing in Fun1"<<endl;
    }

   };

class Fun_2:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_2"<<"\n";
    }
};
class Fun_3:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_3"<<endl;
    }
};

int main()
{      
    Fun f1;
    Fun_2 f2;
    Fun_3 f3;
    f1.play();
    f2.play();
    f3.play(); 
}
/*
In the above example in main function you have created different object for different classes.
Alternate way is to create a base class pointer and pointing to derived class objects.
But, when base class pointer contains the address of the derived class object, always executes the base class function. 
Below is the example
*/

#include<iostream>
using namespace std;

class Fun
{   
    public:
    void play()
    {
        cout<<"Playing in Fun1"<<endl;
    }

    void run()
    {
        cout<<"Running in Fun1"<<endl;
    }
};

class Fun_2:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_2"<<"\n";
    }
};
class Fun_3:public Fun
{  
    public:
    void play()
    {
        cout<<"Playing in Fun_3"<<endl;
    }
};

int main()
{   
    Fun *ptr;
    
    Fun f1;
    Fun_2 f2;
    Fun_3 f3;
    
    f1.play();
    
    ptr = &f1;
    ptr->play();

    ptr = &f2;
    ptr->run();

    ptr = &f2;
    ptr->play();
    
    ptr = &f3;
    ptr->play();  
}
/*In the above example it only execute the base class function.
  now we are going to implement the virtual function in base class to achieve run time polymorphism.
  Virtual function tells the compiler that this function should be overridden by any derived class that wishes to provide its own signature.
  So appropriate function to be called is determined by the type of the object being referred to, rather than the type of the pointer or reference used to access it.
*/

/*
Before implementing virtual function I've a question?
-----------------------------------
In C++, when you have a base class with multiple derived classes, and each derived class has a function with the same name as the one in the base class, 
you can create objects of different derived classes(as we have already seen in above example) and call the function with each object. 
then what is the need of Virtual Function?
--------------------------------
----Answer----
-----
Static Binding: Without virtual functions, the function called is determined at compile-time based on the type of the pointer or reference. 
                This means that if you have a base class pointer pointing to a derived class object, calling a function will always invoke the base class's implementation, regardless of the actual type of the object.

Polymorphism: Virtual functions enable polymorphic behavior, where the appropriate function to be called is determined at runtime based on the actual type of the object. This allows for more dynamic and flexible behavior, as different derived classes can provide their own implementations of the same function.

Code Reusability and Flexibility: Virtual functions facilitate code reuse and promote a more modular design. They allow base class pointers to be used to work with objects of derived classes, providing a common interface for interacting with objects of different types.

Dynamic Dispatch: Virtual functions enable dynamic dispatch, meaning that the function to be called is determined at runtime based on the type of the object being referred to. This enables more dynamic and runtime-specific behavior, which is especially useful in scenarios where the actual type of objects may vary during program execution.
-----
*/

//Virtual Function example

#include<iostream>
using namespace std;

class Fun
{   
    public:
    virtual void play()
    //void play()
    {
        cout<<"Playing in Fun1"<<endl;
    }

    void run()
    {
        cout<<"Running in Fun1"<<endl;
    }
};

class Fun_2:public Fun

{  
    public:
    void play()
    {
        cout<<"Playing in Fun_2"<<"\n";
    }
};
class Fun_3:public Fun

{  
    public:
    void play()
    {
        cout<<"Playing in Fun_3"<<endl;
    }
};

int main()
{   
    Fun *ptr;
    
    Fun f1;
    Fun_2 f2;
    Fun_3 f3;
    
    // f1.play();
    
    // ptr = &f1;
    // ptr->play();

    ptr = &f2;
    ptr->run();

    ptr = &f2;
    ptr->play();
    
    ptr = &f3;
    ptr->play();
}






