#include <iostream>
using namespace std;

class Base{
    //all elements are accessible within this class only.
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void funBase(){
        a=10;b=20;c=30;
    }
};

class derived:public Base{
    public:

    void funDerived(){
        // a=20;        private is although available but not accessible.
        b=30;
        c=40;
    }

};

int main(){

    Base b;
    // b.a=10;      cannot access these members upon an object (private and protected).
    // b.b=20;
    b.c=40;

    return 0;
}