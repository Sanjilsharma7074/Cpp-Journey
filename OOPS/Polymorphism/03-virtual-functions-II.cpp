#include <iostream>
using namespace std;

class basicCar{
    public:
    virtual void start(){
        cout<<"starting basic car"<<endl;
    }
};

class advanceCar:public basicCar{
    public:
    void start(){
        cout<<"starting the advance car"<<endl;
    }
};

int main(){

    basicCar *ptr=new advanceCar();
    ptr->start();       //starting the advance car
    ptr->basicCar::start();     //starting basic car

    return 0;
}