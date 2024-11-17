#include <iostream>
using namespace std;

class test{
    public:
    int a;
    static int count;

    test(){
        a=10;
        count++;
    }

    static int getCount(){
        // a++;     cannot access non static data members
        return count;
    }
};

int test:: count=0;

int main(){

    test t1,t2;
    cout<<t1.count<<endl;       //2
    cout<<t2.count<<endl;       //2
    t1.count=25;
    cout<<t2.count<<endl;           //25
    cout<<test::count<<endl;        //25

    //static member function can be called using the class name and upon the object too

    //belons to a class and not an object 
    cout<<test::getCount()<<endl;   //25
    cout<<t1.getCount()<<endl;      //25


    return 0;
}