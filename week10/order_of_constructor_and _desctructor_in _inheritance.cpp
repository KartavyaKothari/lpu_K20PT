#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A constructor called"<<endl;
    }
    ~A(){
        cout<<"A destructor called"<<endl;
    }
};

class B : public A{
    public:
    B(){
        cout<<"B constructor called"<<endl;
    }
    ~B(){
        cout<<"B destructor called"<<endl;
    }
};

class C : public B{
    public:
    C(){
        cout<<"C constructor called"<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"C destructor called"<<endl;
    }
};

void func(){
    C c;
}

int main(){
    func();
    return 0;
}