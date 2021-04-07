#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: private A{
    // private:
    // int b;
    // int c;

    public:
    B(){
        // cout<<a;
        cout<<b;
        cout<<c;
    }
};

class C: public B{
    public:
    C(){
        // cout<<a;
        cout<<b;
        cout<<c;
    }
};

int main(){
    A obj_a;
    obj_a.c;

    B obj_b;
    obj_b.c;

    C obj_c;
    obj_c.c;

    return 0;
}