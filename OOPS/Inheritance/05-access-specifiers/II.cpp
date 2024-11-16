#include <iostream>
using namespace std;

class myCar{
    private:
    int manualGear;
    protected:
    int windowPanel;
    public:
    int open;

    void funMyCar(){
        int manualGear=10;
        int windowPanel=20;     //all elements together can be accesible within this class ONLY.
        int open=30;

    }
};

class youCar:public myCar{
    void funYourCar(){
        // manualGear=20;       Private will be available but neither accessible nor modifiable.
        windowPanel=30;
        open=40;
    }
};

int main(){

    myCar car;
    // car.manualGear=30;       Cannot access private and protected members upon an Object.
    // car.windowPanel=40;
    car.open=50;

    return 0;
}