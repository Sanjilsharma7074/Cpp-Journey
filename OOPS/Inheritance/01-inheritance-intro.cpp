#include <iostream>
using namespace std;

class Base{
    public:
    int x;
    void show(){
        cout<<"Display of Base."<<x<<endl;
    }
};
class Derived: public Base{
    public:
    int y;
    void display(){
        cout<<"Display of Derived."<<x<<" "<<y<<endl;
    }
};

int main(){

    Base b;
    b.x=10;
    b.show();       //Display of Base.   10

    Derived d;
    d.x=90;
    d.y=70;
    d.show();          //Display of Base. 90
    d.display();      //Display of Derived. 90  70

    return 0;
}
