#include <iostream>
using namespace std;

//Specialisation - rectangle was already existing and we defined a new class with extra features, cuboid is a sepcialised rectangle.


//Known as top-down-approach. (inheritance occurs top to down)

// class Rectangle{
//     public:
//     void funR(){
//         cout<<"I am rectangle"<<endl;
//     }
// };

// class cuboid: public Rectangle{
//     public:
//     void funC(){
//         cout<<"I am cuboid"<<endl;
//     }
// };


// Generalised term - the parent class is a virtual term that does not exist in real world, local defination of group of things. 

//Known as bottom-up-approach. (Don't have anything to give to the child class)

class shape{
    public:
    void funs(){
        cout<<"function of shape"<<endl;
    }
};

class circle:public shape{
    public:
    void funCi(){
        cout<<"function of circle"<<endl;
    }
};
class square:public shape{
    public:
    void funS(){
        cout<<"function of square"<<endl;
    }
};
class reactangle:public shape{
    public:
    void funR(){
        cout<<"function of rectangle"<<endl;
    }
};

int main(){

    // cuboid c;
    // c.funR();        //I am rectangle            I am cuboid
    // c.funC();

    circle obj;
    obj.funs();        //function of shape       function of circle
    obj.funCi();

    return 0;
}