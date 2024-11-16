#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base constructor"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived constructor"<<endl;
    }
};

int main(){

    Derived obj;    //Base constructor    Derived constructor

    return 0;
}
