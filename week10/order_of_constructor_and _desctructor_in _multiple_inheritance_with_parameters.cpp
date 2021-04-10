#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"A constructor called with value "<<a<<endl;
    }
    ~A(){
        cout<<"A destructor called"<<endl;
    }
};

class B{
    public:
    B(int b){
        cout<<"B constructor called with value "<<b<<endl;
    }
    ~B(){
        cout<<"B destructor called"<<endl;
    }
};

class C : public B, public A{
    public:
    C(int a, int b, int c) :A(a),B(b) {
        cout<<"C constructor called with value "<<c<<endl;
        cout<<endl;
    }
    ~C(){
        cout<<"C destructor called"<<endl;
    }
};

void func(){
    C c(1,2,3);
}

int main(){
    func();
    return 0;
}