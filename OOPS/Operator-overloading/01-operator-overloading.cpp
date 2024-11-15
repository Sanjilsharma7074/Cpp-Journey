#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:

    complex(int real=0,int img=0){
        setReal(real);
        setImg(img);
    }

    complex add(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }


    //accessors
    int getReal(){return real;}
    int getImg(){return img;}

    //mutators
    void setReal(int real){
        this->real=real;
    }

    void setImg(int img){
        this->img=img;
    }



    void getInfo(){
        cout<<getReal()<<" + i"<<getImg();
    }
    

};

int main(){

    complex c1(10,5);
    complex c2(3,2);

    complex c3;
    c3=c1.add(c2);

    c3.getInfo();       //13 + i7

    return 0;
}