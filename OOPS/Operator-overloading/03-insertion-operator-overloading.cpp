#include <iostream>
using namespace std;

class complex{

    private:
    int real;
    int img;

    public:

    //mutators
    void setReal(int real){
        this->real=real;
    }
    void setImg(int img){
        this->img=img;
    }

    //accessors
    int getReal(){
        return real;
    }
    int  getImg(){
        return img;
    }

    //constructor
    complex(int real=0,int img=0){
        setReal(real);
        setImg(img);
    }

    //insertion function

    friend ostream& operator<<(ostream &out,complex &c);

};

ostream& operator<<(ostream &out,complex &c){
    out<<c.real<<" + i"<<c.img;
}

int main(){

    complex c(10,5);
    cout<<c<<endl;      //10+i5

    return 0;
}