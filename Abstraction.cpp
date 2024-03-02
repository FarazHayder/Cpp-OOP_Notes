#include <iostream>
using namespace std;

//Abstract Class (Abstract means Virtual)
class AbstractEmployee {
    virtual void AskForPromotion()=0; //An abstract class contains at least one pure virtual function
};

//AbstractEmployee is Base Class (Parent Class or Superclass) and Employee is Derived Class (Child Class or Subclass).
//The subclass inherits all of the properties and methods of the superclass, and can also define its own properties and methods.

class Employee:AbstractEmployee { //Since class "Employee" is inheriting from abstract class "AbstractEmployee" so it will have to provide implementation for "AskForPromotion"

public:
    
    string Name;
    string Company;
    int Age=0;

    Employee(string name, string company, int age){
            Name=name;
            Company=company;
            Age=age;
    }

    void AskForPromotion(){
        if (Age>30){
            cout<<Name<<" got Promoted!"<<endl;
        }
        else {
            cout<<Name<<", sorry NO promotion for you!"<<endl;
        }
    }

};


int main (){

    //Abstraction means hiding complex things behind a procedure that makes those things look simple. (User Interface)
    //e.g. You just press a button to take a picture on your smart phone, whereas, for the company, a lot of complex logic is involved behind it.

    Employee Employee1=Employee("Faraz","FAST",18);
    Employee Employee2=Employee("John","Amazon",35);
    
    Employee1.AskForPromotion();
    Employee2.AskForPromotion();

    return 0;
}