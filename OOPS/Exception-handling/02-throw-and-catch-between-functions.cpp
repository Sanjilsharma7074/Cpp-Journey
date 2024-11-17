#include <iostream>
using namespace std;

int division(int x,int y){
    if(y==0){
        throw 1;
    }
    return x/y;
}

int main(){

    try{

        int c=division(3,0);
        cout<<c<<endl;

    }
    catch(int e){
        cout<<"Division by 0: error "<<e<<endl; //Division by 0: error 1        Bye

    }
    cout<<"Bye"<<endl;

    return 0;
}