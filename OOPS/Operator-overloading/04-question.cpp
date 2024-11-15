#include <iostream>
using namespace std;

//write a class for ratinal numbers (p/q) with overloading + and << operator.

class Rational{

    public:

    int numerator;
    int denominator;


    Rational(int numerator=1,int denominator=1)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }

    friend Rational operator+(Rational r);

    friend ostream& operator<<(ostream &out,Rational &r);


};

Rational operator+(Rational r1, Rational r2){
        
        Rational temp;
        temp.numerator=r1.numerator+r2.numerator;
        temp.denominator=r1.denominator+r2.denominator;
        return temp;

    }


ostream& operator<< (ostream &out,Rational &r){
    out<<r.numerator<<"/"<<r.denominator;
}


int main(){

    Rational r1(3,5);

    Rational r2(2,4);

    Rational r3;

    r3=r1+r2;

    cout<<r3<<endl;     //      5/9

    return 0;
}