#include <iostream>
using namespace std;

class Rectangle{

    int length;
    int breadth;

    public:

    //both constructors would lead to ambiguity.

    // Rectangle(){
    //     length=0;
    //     breadth=0;
    // }


    //instead of defining a complete different constructor to set the constructed and updated values, we defined both in one constructor.


    Rectangle(int l=0,int b=0){
        // length=l;
        setLength(l);
        // breadth=b;
        setBreadth(b);
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

    Rectangle r1(10,2);

    cout<<"Length: "<<r1.getLength()<<endl<<"Breadth: "<<r1.getBreadth()<<endl;     //10    2

    Rectangle r2(10);

    cout<<"Length: "<<r2.getLength()<<endl<<"Breadth: "<<r2.getBreadth()<<endl;     //10    0

    return 0;
}