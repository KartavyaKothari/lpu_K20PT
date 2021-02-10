#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    cout<<"Int wala func was called"<<endl;
    return a>b?a:b;
}

double max(double a, double b){
    cout<<"Double wala func was called"<<endl;
    return a>b?a:b;
}

int max(int a, int b, int c){
    return max(max(a,b),c);
}

int max(int a, int b, int c, int d){
    return max(max(a,b,c),d);
}

int max(int a, int b, int c, int d, int e){
    return max(max(a,b,c,d),e);
}

int main(){
    cout<<max(10,20)<<endl;
    cout<<max(10.0,20.0)<<endl;
    cout<<max(10,20,30)<<endl;
    cout<<max(10,20,30,40)<<endl;
    cout<<max(10,20,30,40,50)<<endl;
    return 0;
}