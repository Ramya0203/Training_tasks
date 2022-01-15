The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object
Oriented Programming. 
Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
Super Class:The class whose properties are inherited by sub class is called Base Class or Super class. 

#include <iostream>
using namespace std;
 
//Base class
class Parent
{
    public:
      int id_p;
};
  
// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
      int id_c;
};
 
//main function
int main()
   {
      
        Child obj1;
          
        // An object of class child has all data members
        // and member functions of class parent
        obj1.id_c = 7;
        obj1.id_p = 91;
        cout << "Child id is " <<  obj1.id_c << endl;
        cout << "Parent id is " <<  obj1.id_p << endl;
         
        return 0;
   }

