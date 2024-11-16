#include <iostream>
using namespace std;

class basicCar{
    public:
    void open(){
        cout<<"Opening the basic car"<<endl;
    }
};

class advanceCar:public basicCar{
    public:
    void openAC(){
        cout<<"Opening the advance car"<<endl;
    }
};

int main(){

    basicCar *ptr=new advanceCar();
    ptr->open();        //Opening the basic car    

    // ptr->openAC();       ptr is of basic car and the openAC is a function of advance car hence gave an error.
    //pointer of advance car and object of basic car is not possible 

    return 0;
}