#include <iostream>
using namespace std;

//only those fnctions will be called which are present in the base class since the pointer is of the base class.

class Base{

    public:
    void fun1(){
        cout<<"fun1 of base"<<endl;
    }
};

class Derived:public Base{
    public:

    void fun2(){
        cout<<"fun2 of derived"<<endl;
    }

};

int main(){

    Derived d;
    Base *ptr=&d;

    ptr->fun1();        //fun1 of base
    // ptr->fun2();

    // Base b;              derived class pointer and base class object for that pointer is not possible
    // Derived *p=&b;
    
    return 0;
}