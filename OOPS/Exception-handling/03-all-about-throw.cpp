#include <iostream>
using namespace std;

class myException:public exception{};

int division(int x,int y) throw (myException)   //we can have an empty throw() which indicates that there are 0 throws in a function 
{
    if(y==0){
        throw myException();    //we can have any type of var here provided its type is  defined in the catch block.
    }
    return x/y;
}

int main(){

    try{

        int c=division(3,0);
        cout<<c<<endl;

    }
    catch(myException e){
        cout<<"Division by 0: error "<<endl;    //Division by 0: error      Bye
    }
    cout<<"Bye"<<endl;

    return 0;
}