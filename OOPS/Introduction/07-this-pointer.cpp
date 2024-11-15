#include <iostream>
using namespace std;

class rectangle{

    private:
    int length;
    int breadth;

    public:

    rectangle(int length=0,int breadth=0){
        // this->length=length;
        setLength(length);
        // this->breadth=breadth;
        setBreadth(breadth);
    }

    rectangle(rectangle &obj){
        this->length=obj.length;
        this->breadth=obj.breadth;
    }


    //mutators
    void setLength(int length){
        this->length=length;
    }

    void setBreadth(int breadth){
        this->breadth=breadth;
    }

    //accessors
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    //facilitators
    int area(){
        return length*breadth;
    }

    int perimeter();

    void getInfo(){
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};

int rectangle :: perimeter(){
    return 2*(length+breadth);
}

int main(){

    rectangle r(5,3);
    r.getInfo();

    rectangle rcopy(r);
    rcopy.getInfo();

    return 0;
}