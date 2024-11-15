#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:

    //default + non-parameterised constructor
    Rectangle(){
        cout<<"Constructor is declared"<<endl;
        length=0;
        breadth=0;
    }

    //parameterised constructor
    Rectangle (int l, int b){
        // length=l;
        setLength(l);
        // breadth=b;
        setBreadth(b);

    }

    //copy constructors
    Rectangle (Rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
    }

    //mutators
    void setLength(int l){
        length=l;
    }

    void setBreadth(int b){
        breadth=b;
    }

    //accessors
    int getLength(){
        return length;
    }

    int getBreadth(){

        return breadth;
    }


};

int main(){

    Rectangle  r1(10,2);

    Rectangle r2(r1);


    cout<<"Length and Breadth of first rectangle: "<<endl;
    cout<<r1.getLength()<<endl;     //10
    cout<<r1.getBreadth()<<endl;    //2

    cout<<"Length and Breadth of second rectangle: "<<endl;
    cout<<r2.getLength()<<endl;     //10
    cout<<r2.getBreadth()<<endl;    //2

    r1.setLength(20);
    r1.setBreadth(30);

    cout<<"Length and Breadth of first rectangle after variation: "<<r1.getLength()<<"  "<<r1.getBreadth()<<endl;   //20    30
    cout<<"Length and Breadth of second rectangle after variation: "<<r2.getLength()<<"  "<<r2.getBreadth()<<endl;  //10    2



    return 0;
}