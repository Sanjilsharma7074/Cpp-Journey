#include <iostream>
using namespace std;

class parent{

    private:
    int a;
    
    protected:
    int b;

    public:
    int c;
    void funP(){
        a=10;
        b=20;
        c=30;
    }
};

class child: private parent{
    void funC(){
        // a=20;    will not access private 
        b=30;
        c=40;
    }
};

class grandChild: public child{
    void funG(){
        // a=30;    will not access private members of parent class 
        // b=40;
        // c=50;
    }
};


int main(){

    child c;
    // c.a=5;   will not access private and protected members of child class.
    // c.b=3;
    // c.c=8;
    return 0;
}