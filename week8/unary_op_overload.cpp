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

    void operator ++(){
        cout<<"Incremeting real and complex parts"<<endl;
        r++;
        c++;
    }

    void operator --(){
        cout<<"Decrementing real and complex parts"<<endl;
        r--;
        c--;
    }
};

int main(){
    ComplexNumber num1(3,4);
    num1.display();

    ++num1;
    num1.display();
    --num1;
    num1.display();

    return 0;
}