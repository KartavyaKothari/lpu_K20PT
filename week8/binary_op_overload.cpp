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
};

int main(){
    ComplexNumber num1(30,40);
    ComplexNumber num2(12,9);
    num1.display();
    num2.display();

    ComplexNumber num3 = num1+num2;
    num3.display();

    return 0;
}