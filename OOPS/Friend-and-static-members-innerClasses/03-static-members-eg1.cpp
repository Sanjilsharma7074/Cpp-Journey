#include <iostream>
using namespace std;

class innove{
    public:
    static int price;
    innove(){}
    static int getPrice(){
        return price;
    }
};
int innove:: price=20;

int main(){

    //called upon a class
    cout<<innove::getPrice()<<endl;     //20

    innove i;

    //called upon an object
    cout<<i.getPrice()<<endl;          //20

    return 0;
}