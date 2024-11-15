#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l=0,int b=0){
        setlength(l);
        setBreadth(b);
    }

    //mutators

    void setlength(int l){
        length=l;
    }

    void setBreadth(int b){
        breadth=b;
    }

    //accessors written in form of inline functions (1st method to declare a function inline)
 
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    int area(){
        return length*breadth;
    }

    //2nd method to make a function inline -> using the 'inline' keyword.
    inline int perimeter();


    void getInfo(){
        cout<<"Area: "<<area()<<endl;   
        cout<<"Perimeter: "<<perimeter()<<endl;  
    }

};

int Rectangle:: perimeter(){
        return 2*(length+breadth);
    }

int main(){

    Rectangle r(20,5);
    r.getInfo();    //100   50

    return 0;
}