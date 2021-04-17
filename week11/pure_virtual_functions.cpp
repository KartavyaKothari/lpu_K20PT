#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void print() = 0;
    void show(){
        cout<<"Showing from base"<<endl;
    }
};

class Derived: public Base{
    public:
    void print(){
        cout<<"Printing from derived"<<endl;
    }
    void show(){
        cout<<"Showing from derived"<<endl;
    }
};

class B:public Derived{
    public:
    void print(){};
};

int main(){
    Base *d = new Derived();
    d->print();
    d->show();
    return 0;
}