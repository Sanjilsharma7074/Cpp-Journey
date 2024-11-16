#include <iostream>
using namespace std;

//write a class for employe -> derived classes: fulltime employee with salary, part time employee with daily wages

class Employee{
    private:
    string name;
    int eID;

    public:
    Employee(string name="xyz",int eID=00){
        setName(name);
        setID(eID);
    }

    void setName(string name){
        this->name=name;
    }
    void setID(int eID){
        this->eID=eID;
    }

    string getName(){
        return name;
    }

    int getID(){
        return eID;
    }

    void displayE(){
        cout<<"Entered Employee Class."<<endl;
        cout<<"Name: "<<getName()<<endl<<"Employee ID: "<<getID()<<endl;
    }

};

class fulltime:public Employee{
    private:
    int salary;

    public:
    fulltime(string name,int eID, int salary):Employee(name,eID){
        // setName(name);
        // setID(eID);
        setSalary(salary);
    }

    void setSalary(int salary){
        this->salary=salary;
    }

    int getSalary(){
        return salary;
    }

    void displayFE(){
        
        cout<<"Entered Fulltime Employee Class."<<endl;
        cout<<"Name: "<<getName()<<endl<<"Employee ID: "<<getID()<<endl<<"Salary: "<<getSalary()<<endl;
    }

};

class parttime:public Employee{

    private:
    int wages;

    public:
    parttime(string name,int eID, int wages):Employee(name,eID){
        // setName(name);
        // setID(eID);
        setWages(wages);
    }

    void setWages(int wages){
        this->wages=wages;
    }

    int getWages(){
        return wages;
    }

    void displayPE(){
        cout<<"Entered Parttime Employee Class."<<endl;
        cout<<"Name: "<<getName()<<endl<<"Employee ID: "<<getID()<<endl<<"Wages: "<<getWages()<<endl;
    }

};

int main(){

    Employee person("sanjil",1567);
    person.displayE();

    fulltime person1("abc",23,500000);
    person1.displayFE();
    person1.displayE();


    parttime person2("xyz",24,10000);
    person2.displayPE();
    person2.displayE();

    return 0;
}


//output

// Entered Employee Class.
// Name: sanjil
// Employee ID: 1567
// Entered Fulltime Employee Class.
// Name: abc
// Employee ID: 23
// Salary: 500000
// Entered Employee Class.
// Name: abc
// Employee ID: 23
// Entered Parttime Employee Class.
// Name: xyz
// Employee ID: 24
// Wages: 10000
// Entered Employee Class.
// Name: xyz
// Employee ID: 24