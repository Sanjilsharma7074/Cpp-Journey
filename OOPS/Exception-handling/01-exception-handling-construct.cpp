#include <iostream>
using namespace std;

int main(){

    int x=9,y=0,z;
    try{

        if(y==0){
            throw 101;
        }
        z=x/y;
        cout<<z<<endl;

    }
    catch(int e){
        cout<<"Division by 0: error "<<e<<endl;     //Division by 0: error 101      Bye

    }
    cout<<"Bye"<<endl;

    return 0;
}