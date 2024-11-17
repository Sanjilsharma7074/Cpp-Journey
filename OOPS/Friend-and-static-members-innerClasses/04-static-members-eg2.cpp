#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rollNo;
    static int addminNo;
    student(string name){
        this->name=name;
        addminNo++;
        rollNo=addminNo;
    }

    void display(){
        cout<<"Name: "<<name<<endl<<"RollNo: "<<rollNo<<endl;
    }
    
};
int student:: addminNo=20;

int main(){

    student s1("neha");
    student s2("sarla");

    cout<<student::addminNo<<endl;  //22
    cout<<s1.addminNo<<endl;        //22
    cout<<s2.addminNo<<endl;        //22

    s1.display();       //Name: neha        RollNo: 21
    s2.display();       //Name: sarla       RollNo: 22

    cout<<"Number of admissions: "<<student::addminNo<<endl;        //Number of admissions: 22


    return 0;
}