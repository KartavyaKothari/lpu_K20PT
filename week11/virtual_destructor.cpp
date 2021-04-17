#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Cons of Base"<<endl;
    }
    virtual ~Base(){
        cout<<"Des of Base"<<endl;
    }
};

class Derived: public Base{
    public:
    Derived(){
        cout<<"Cons of Derived"<<endl;
    }
    ~Derived(){
        cout<<"Des of Derived"<<endl;
    }
};

int main(){
    Base *d = new Derived();
    delete d;
    return 0;
}