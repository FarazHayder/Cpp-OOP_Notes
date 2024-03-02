#include <iostream>
using namespace std;

class Employee
{                   // Class
public:             // public           // access modifier
    string Name;    // Member
    string Company; // Member
    int Age;        // Member

    // Access Modifiers are of three types:-
    // Private: The members of the class cannot be accessed outside the class. (Same class)
    // Public: The members of the class can be accessed outside the class. (Same class, Derived class, and Any other class)
    // Protected: The members of the class can or cannot be accessed outside the class. (Same class ond Derived class)

    // Class Method (A function inside a class is called a method.)
public:
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    // Constructor (Special Method -> Does not have a return type)
    Employee() // Default Constructor
    {
        Name = "";
        Company = "";
        Age = 0;
    }
    Employee(string Name, string Company, int Age) // Parameterized Constructor
    {
        this->Name = Name;
        this->Company = Company;
        this->Age = Age;
    }
    Employee(Employee &EmployeeObj)
    { // Copy Constructor
    }
    // this-> pointer: It points to the object that invoked the method. OR It points to the nearest object.
    //  In C++ there is always a default constructor; It is used to initialize some valid values to the members of an object. It is executed automatically whenever an object of a class is created.
    //  If we create our own constructor than the default constructor is not executed.
};
// Everything inside class is private by default in C++

int main()
{

    // Class is basically same as a datatype but it is user-defined.
    // For example, class Employee;
    // int number; //demonstration for understanding class; that it is just same as any other data type.
    Employee Employee1; // Employee1 is object/instance of class Employee //same as: datatype nameofvariable (e.g. int number)
    Employee1.Name = "Faraz";
    Employee1.Company = "FAST";
    Employee1.Age = 18;
    Employee1.IntroduceYourself();

    // Employee2.Name="John";
    // Employee2.Company="Amazon";
    // Employee2.Age=35;
    // Employee2.IntroduceYourself();

    // Now what if we want to create 10 employees, we'd have to write the above part (4 lines) of code again and again... This leads us to study "Constructors"
    // Constructor is a special type of method that is invoked each time that an object of a class is created. -Saldina(CodeBeauty)
    // 1. It does not have a return type.
    // 2. It has the same name as the class.
    // 3. It must be public. (As a beginner we must ensure this)

    // Now using constructors
    Employee Employee1 = Employee("Faraz", "FAST", 18);
    Employee1.IntroduceYourself();

    Employee Employee2 = Employee("John", "Amazon", 35);
    Employee2.IntroduceYourself();

    return 0;
}

// According to Ma'am:
// struct Student { //Basically a container
//      roll_no; //identifier
//      name;
//      f_name;
//      course;
//  } s1,s2; //instances
//  cin>>s1.name;
//  cin>>s2.name;