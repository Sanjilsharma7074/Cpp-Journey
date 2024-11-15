#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l=0,int b=0){
        setLength(l);
        setBreadth(b);
    }


    //mutators
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }


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


int Rectangle :: perimeter(){

    return 2*(length+breadth);
}

int main(){

    Rectangle r(10,6);

    r.getInfo();    //60    32
    


    return 0;
}