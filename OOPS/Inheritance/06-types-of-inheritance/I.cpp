#include <iostream>
using namespace std;

class A{
    public:
    int a;
    void funA(){
        cout<<"class A"<<endl;
    }
};

//virtual based classes are useful for removing the ambiguity of the features of parent class in the derived class that are coming via multiple paths.



class B:virtual public A{
    public:
    int b;
    void funB(){
        cout<<"class B"<<endl;
    };
};
class C: virtual public A{
    public:
    int c;
    void funC(){
        cout<<"class C"<<endl;
    };
    
};
class D:public B,public C{
    public:
    int d;
    void funD(){
        cout<<"class D"<<endl;
    };
};

int main(){

    D obj;
    obj.funA();
    obj.funB();
    obj.funC();
    obj.funD();

    return 0;
}