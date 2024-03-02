#include <iostream>
using namespace std;

class Employee {

protected:
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

    virtual void Work(){ //When a virtual function is invoked, it checks if there is its implementation in its derived classes. If YES, then that function is executed instead.
        cout<<Name<<" is checking email, task backlog, performing tasks..."<<endl;
    }

};

class Developer:public Employee {
public:
    string FavProgLang;

    Developer(string name, string company, int age, string favProgLang):Employee(name, company, age){ 
        FavProgLang=favProgLang;
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgLang<<endl;
    }
    void Work(){
        cout<<Name<<" is writing "<<FavProgLang<<" code."<<endl;
    }
};

class Teacher:public Employee {
public:    
    string Subject;

    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject=subject;
    }
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<" lesson."<<endl;
    }
};


int main (){

    //The ability of an object or method to have many forms is called Polymorphism. (Greed word:- Poly -> many & morph -> forms)
    //Basically in programming polymorphism describes the ability of an object or a method to have many forms.

    Developer Developer1=Developer("Saldina","YT-CodeBeauty",25,"C++");
    Developer1.Work();
    
    Teacher Teacher1=Teacher("Ayesha","BSE",40,"Physics");
    Teacher1.Work();

    //Most common use of Polymorphism is: When a parent class reference is used to refer to a child class object.
    Employee *E1=&Developer1;
    E1->Work(); //This only works when we make the "Work()" virtual, in the Parent class.
    Employee *E2=&Teacher1;
    E2->Work();

    return 0;
}




