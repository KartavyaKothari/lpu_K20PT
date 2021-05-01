#include<bits/stdc++.h>
using namespace std;

template <class KOALA>
class Calculator{
    public:
    KOALA x,y;

    Calculator(KOALA x, KOALA y){
        this->x = x;
        this->y = y;
    }

    KOALA add(){
        return x+y;
    }

    KOALA sub(){
        return x-y;
    }

    KOALA mul(){
        return x*y;
    }
    void display();
};

template <class T>
void Calculator<T>::display(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}

// void Calculator::display(){
//     //
// }

int main(){
    Calculator<double> c(10.3,20.12);

    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;
    cout<<c.mul()<<endl;

    c.display();
    return 0;
}