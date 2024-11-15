#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaPtr;

    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double();
        *cgpaPtr=cgpa;
    }
    Student(Student &obj){
        this->name=obj.name;
        cgpaPtr=new double();
        *cgpaPtr=*(obj.cgpaPtr);
        // this->cgpaPtr=obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
        cout<<cgpaPtr<<endl;
    }

};

int main(){
    Student s1("ramesh",10);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr)=9;
    s1.getInfo();
    s2.getInfo();


    return 0;
}