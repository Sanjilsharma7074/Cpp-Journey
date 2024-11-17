#include <iostream>
using namespace std;

class myException1{};
class myException2:public myException1{};

int main(){

    try{
        // throw 1;     Int catch
        // throw 1.1;   Double catch
        // throw string("hi");  All catch
        // throw myException1();    All catch when catch for both the classes were not defined 
        // throw myException1();    class myexception 1
        // throw myException2();    class myexception 2
    }
    catch(int e){
        cout<<"Int catch"<<endl;
    }
    catch(double e){
        cout<<"Double catch"<<endl;
    }

    //the order of catch matters in case of inherited and base classes, it has to be of the below given order only or else will generate 
    //a warning saying that the parent class can handle teh exception of teh child class too. 
    catch(myException2 e){
        cout<<"class myexception 2"<<endl;
    }
    catch(myException1 e){
        cout<<"class myexception 1"<<endl;
    }

    //catch all must be present at last only to handle all those exception for whom a specific catch block with a specified type is
    //not mentioned 
    catch(...){
        cout<<"All catch"<<endl;
    }

    return 0;
}