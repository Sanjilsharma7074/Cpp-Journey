#include <iostream>
using namespace std;
//classes are used in two ways- inherited(isA relationship), having an object of that class(hasA realtionship).

class Rectangle{
    public:

    int length;
    int breadth;

    Rectangle(int l=0,int b=0){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }
    
};

//Cuboid 'isA' Rectangle.
class Cuboid: public Rectangle{

    public:
    int height;

    Cuboid(int l=0,int b=0,int h=0){

        length=l;
        breadth=b;
        height=h;
    }

};

class Table{
    public:
    //Table class 'hasA' Rectangle.
    Rectangle top;
    int legs;
};


int main(){

    return 0;
}