#include <iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(int length=0,int breadth=0){
        setLength(length);
        setBreadth(breadth);
    }

    void setLength(int length){
        this->length=length;
    }

    void setBreadth(int breadth){
        this->breadth=breadth;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

class cuboid: public rectangle{
    private:
    int height;

    public:
    cuboid(int length=0, int breadth=0,int height=0){
        setLength(length);
        setBreadth(breadth);
        setHeight(height);
    }

    void setHeight(int height){
        this->height=height;
    }

    int getHeight(){
        return height;
    }

    int volume(){
        return getLength()*getBreadth()*height;
    }

    friend ostream& operator<<(ostream &out,cuboid &obj);

};

ostream& operator<<(ostream &out,cuboid &obj){
    out<<"Length: "<<obj.getLength()<<endl<<"Breadth: "<<obj.getBreadth()<<endl<<"Height: "<<obj.getHeight()<<endl<<
    "Volume: "<<obj.volume()<<endl;
}

int main(){

    cuboid c(10,2,3);
    cout<<c<<endl;

    return 0;
}