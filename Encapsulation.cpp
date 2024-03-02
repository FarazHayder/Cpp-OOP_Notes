#include <iostream>
using namespace std;

class Employee {

private:
    string Name;
    string Company;
    int Age=0;

public:
    void setName(string name){//setter
        Name=name;
    }
    string getName(){//getter
        return Name;
    }
    void setCompany(string company){//setter
        Company=company;
    }
    string getCompany(){//getter
        return Company;
    }
    void setAge(int age){//setter
        if (age>=18){
            Age=age;
        }
    }
    int getAge(){//getter
        return Age;
    }

    void IntroduceYourself() {
    cout<<"Name - "<<Name<<endl;
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl;
    }

    Employee(string name, string company, int age){
            Name=name;
            Company=company;
            Age=age;
    }

};


int main (){

    //Encapsulation is idea of bundling or tying together data and methods that operate on that data so that they are grouped together within a class.
    //We do this to prevent other classes from "directly" accessing, i.e. modifying or changing, data of our class.
    //So we provide our own way for this to happen.
    // To access encapsulated properties of a class we use methods (getters & setters).
    //IMPORTANT: One use of this can be to provide a validation to the members of the class. {refer to -> setAge()}
    //For Encapsulation:
    //1. Make all data members "Private".
    //2. Use setter and getter methods for each member.
    
    Employee Employee1=Employee("Faraz","FAST",18);
    //Employee1.IntroduceYourself();

    Employee Employee2=Employee("John","Amazon",35);
    // Employee2.IntroduceYourself();
    
    //Employee1.setAge(39);
    //Employee1.setAge(15); //will not be executed because of age validation in setter
    //cout<<Employee1.getName()<<" is "<<Employee1.getAge()<<" years old."<<endl;

    return 0;
}