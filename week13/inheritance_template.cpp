#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
class Base{
    public:
    TYPE x,y;

    TYPE add(){
        return x+y;
    }
};

template <class TYPE>
class Derived: public Base<TYPE>{
    public:
    Derived(TYPE a, TYPE b){
        x = a;
        y = b;
    }
};

int main(){
    Derived <int>d(10,20);

    cout<<d.add();
    return 0;
}