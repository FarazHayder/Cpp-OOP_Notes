#include <iostream>
using namespace std;

class Employee {

protected: //Use setter and getter if you want to use these members apart from this class and it's derived class.
    string Name;
    string Company;
    int Age=0;

public:

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

//Employee is Base Class (Parent Class or Superclass) and Developer is Derived Class (Child Class or Subclass).
//The subclass inherits all of the properties and methods of the superclass, and can also define its own properties and methods.

class Developer:public Employee { //We used public before Employee to access the properties of class "Employee", not only in this derived class but in other functions (such as main function in this example) as well. //P1 
public:
    string FavProgLang;

    //Constructor for Developer class (Here using a constructor will become must as this class inherits properties from "Employee" class (nextline)
    //and as it already has a constructor therfore the default constructor won't work that is why we must make a constructor for this class as well otherwise it will give an error)
    Developer(string name, string company, int age, string favProgLang):Employee(name, company, age){ 
        FavProgLang=favProgLang; //Other three properties are initialized using " : Employee (name, company, age)"
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgLang<<endl;
    }
};

//Just another example:
class Teacher:public Employee {
public:    
    string Subject;

    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject=subject;
    }
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
};


int main (){

    //There is Base Class (Parent Class or Superclass) and Derived Class (Child Class or Subclass).
    //The subclass inherits all of the properties and methods of the superclass, and can also define its own properties and methods.
    
    Developer Developer1=Developer("Saldina","YT-CodeBeauty",25,"C++");
    Developer1.FixBug();
    Developer1.AskForPromotion(); //This method becomes accessible after using "public" before "Employee" during inheritance. (refer -> P1)

    //Just another example:
    Teacher Teacher1=Teacher("Ayesha","BSE",40,"Physics");
    Teacher1.PrepareLesson();
    Teacher1.AskForPromotion();

    return 0;
}