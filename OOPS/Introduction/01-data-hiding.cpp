#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;

    public:

    //mutators
    void setLength(int l){
        length=l;
    }
    void setbreadth(int b){
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

    Rectangle r;
    r.setLength(10);
    r.setbreadth(5);
    cout<<"Length: "<<r.getLength()<<endl<<"Breadth: " <<r.getBreadth()<<endl;  //10    5

    return 0;
}