#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int rollno;
    float mathMarks;
    float cseMarks;
    float sciMarks;

    public:
    
    Student(string name, int rollno, float mathMarks, float cseMarks, float sciMarks){
        this->name=name;
        this->rollno=rollno;
        this->mathMarks=mathMarks;
        this->cseMarks=cseMarks;
        this->sciMarks=sciMarks;
    }

    float sum=0.0,avg=0.0;
    float total(){
        sum=mathMarks+sciMarks+cseMarks;
        avg=sum/3;
        return sum;
    }

    char grade(){
        if(avg<40){
            return 'C';
        }
        else if(avg>=40 && avg<80){
            return 'B';
        }
        else{
            return 'A';
        }
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Maths marks: "<<mathMarks<<endl;
        cout<<"CSE marks: "<<cseMarks<<endl;
        cout<<"Science marks: "<<sciMarks<<endl;
        cout<<"Total marks out of 300: "<<total()<<endl;
        cout<<"The grade formed: "<<grade()<<endl;
    }
};

int main(){

    Student s1("neha",39,98,99,98);
    s1.getInfo();


    return 0;
}