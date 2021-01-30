#include<bits/stdc++.h>
using namespace std;

template <typename T>
void print_this(T val){
    cout<<"Variable type = "<<typeid(val).name()<<" and Value is "<<val<<endl;
}

// void print_this(double val){
//     cout<<"Variable type = "<<typeid(val).name()<<" and Value is "<<val<<endl;
// }

// void print_this(string val){
//     cout<<"Variable type = "<<typeid(val).name()<<" and Value is "<<val<<endl;
// }

// #define pythagous(a,b) sqrt(a*a+b*b)
inline double pythagorus(double x, double y){
    return sqrt(x*x+y*y);
}

int main(){
    int p = 10;
    double q = 10.3;
    string r = "Hello";
    print_this(p);
    print_this(q);
    print_this(r);
    
}