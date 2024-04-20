/*
Hybrid Inheritance is also called Virtual derivation.
As we can see from the figure that data members/function of class Vehicle are inherited twice to class E_Car.
One through class Car and second through class Car_Types.
When any data / function member of class Vehicle is accessed by an object of class E_Car, ambiguity arises as to which data/function member would be called? 
One inherited through Car or the other inherited through Car_Types. This confuses compiler and it displays error. 

virtual can be written before or after the public. Now only one copy of data/function member will be copied to class Car and class Car_Types and class Vehicle becomes the virtual base class.
A single copy of its data members is shared by all the base classes that use virtual base. 



*/
#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void drive()
    {
        cout<<"Vehicle is running"<<endl;
    }

};
class Car: virtual public Vehicle
{
    public:
    void Tyre()
    {
        cout<<"Car has 4 tyres"<<"\n";
    }

};
class Car_Types: virtual public Vehicle
{   
    public:
    void suv()
    {
        cout<<"SUV"<<endl;
    }
    void audi()
    {
        cout<<"AUDI"<<endl;
    }

};
class E_Car:public Car, public Car_Types
{   
    public:
    void Tesla()
    {
        cout<<"TESLA is an American Company"<<endl;
    }
    void Tata()
    {
        cout<<"Tata is an Indian Company"<<endl;
    }

};
int main()
{
    E_Car e;
    e.drive();
    e.Car::drive();//call drive from car class
    e.Car_Types::drive();//call drive from Car_Types

    e.Tesla();
    e.Tata();
    e.suv();
    e.audi();
    e.Tyre();
    
    
}