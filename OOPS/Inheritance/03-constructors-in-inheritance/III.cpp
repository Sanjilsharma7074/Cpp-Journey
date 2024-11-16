#include <iostream>
using namespace std;

//objective - to call the parameterised constructor of the base class upon calling the object of derived class 

class Base{
    public:
    Base(){
        cout<<"Base constructor"<<endl;
    }
    Base(int y){
        cout<<"Base param constructor: "<<y<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived constructor"<<endl;
    }

    //Yes, we can call the parameterised constructor of the base class from the parameterised constructor of the derived class. Syntax is-
    Derived(int x,int y):Base(y){
        cout<<"Derived param constructor: "<<x<<endl;
    }
};

int main(){

    Derived obj(10,20);    //Base param constructor: 20    Derived param constructor: 10

    return 0;
}
