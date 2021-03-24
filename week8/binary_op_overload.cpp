#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    double r;
    double c;

    public:
    ComplexNumber():r(0),c(0){}
    ComplexNumber(double r, double c):r(r),c(c){}

    void display(){
        cout<<r<<"+"<<c<<"i"<<endl;
    }

    ComplexNumber operator +(ComplexNumber num){
        double real = r+num.r;
        double comp = c+num.c;

        return ComplexNumber(real,comp);
    }

    ComplexNumber operator -(ComplexNumber num){
        double real = r-num.r;
        double comp = c-num.c;

        return ComplexNumber(real,comp);
    }

    ComplexNumber operator /(ComplexNumber b){
        double real = (r*b.r+c*b.c)/(b.r*b.r+b.c*b.c);
        double comp = (c*b.r-r*b.c)/(b.r*b.r+b.c*b.c);

        return ComplexNumber(real,comp);
    }
};

int main(){
    ComplexNumber num1(30,40);
    ComplexNumber num2(12,9);
    num1.display();
    num2.display();

    ComplexNumber num3 = num1+num2;
    num3.display();
    ComplexNumber num4 = num1-num2;
    num4.display();
    ComplexNumber num5 = num1/num2;
    num5.display();

    return 0;
}