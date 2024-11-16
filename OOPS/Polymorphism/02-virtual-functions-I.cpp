#include <iostream>
using namespace std;

class parent{
    public:
    virtual void display(){
        cout<<"Display of base"<<endl;
    }
};

class child:public parent{

    public:
    void display(){
        cout<<"Display of child"<<endl;
    }

};

int main(){

    parent *ptr=new child();
    ptr->display();        //Display of child
    ptr->parent::display();     //Display of base

    return 0;
}