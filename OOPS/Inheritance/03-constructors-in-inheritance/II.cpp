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
    Derived(int x){
        cout<<"Derived param constructor: "<<x<<endl;
    }
};

int main(){

    Derived obj(10);

    return 0;
}