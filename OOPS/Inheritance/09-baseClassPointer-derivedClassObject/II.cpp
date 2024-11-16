#include <iostream>
using namespace std;

class Rectangle{
    public:
    void area(){
        cout<<"Area of rectangle."<<endl;
    }
};

class cuboid:public Rectangle{
    public:
    void volume(){
        cout<<"Volume of cuboid."<<endl;
    }
};

int main(){

    Rectangle *ptr=new cuboid();
    ptr->area();        //Area of rectangle 
    // ptr->volume();  
    // will give an error since the pointer is of the base class- rectangle and volume is a function of the derived class-cuboid 
    //pointer of cuboid and object of rectangle is not possible 

    return 0;
}