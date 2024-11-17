#include <iostream>
using namespace std;

class endTerm;

class test{
    private : int a;
    protected: int b;
    public: int c;

    //friend function can access all the members of a class upon the object
    friend void fun();

    friend endTerm;
};

void fun(){
    test t;
    t.a=10;
    t.b=3;
    t.c=7;

    //a=10;     directly we cannot access the members but upon an object we can do so.
}

class endTerm{
    public: 
    test t;
    void display(){
        t.a=20;
        t.b=30;
        t.c=40;
        cout<<t.a<<endl;    //20
        cout<<t.b<<endl;    //30
        cout<<t.c<<endl;    //40
    }
};

int main(){

    endTerm e;
    e.display();

    return 0;
}