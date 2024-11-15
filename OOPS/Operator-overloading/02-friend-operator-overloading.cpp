#include <iostream>
using namespace std;

class Complex{

    private:
    int real;
    int img;

    public:
    
    Complex(int real=0,int img=0){
        setReal(real);
        setImg(img);
    }

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

    friend Complex operator+(Complex c1, Complex c2);

    void getInfo(){
        cout<<getReal()<<" + i"<<getImg();
    }

};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main(){

    Complex c1(5,10);
    Complex c2(2,3);

    Complex c3;

    c3=c1+c2;

    c3.getInfo();   //7+i13

    return 0;
}