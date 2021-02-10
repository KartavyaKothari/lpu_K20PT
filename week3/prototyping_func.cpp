#include<bits/stdc++.h>
using namespace std;

int sum(int, int);
int sum(int, int, int);
double sum(double,double);

int main(){
    cout<<sum(10.3,20.6)<<endl;
    cout<<sum(10.3,20.6,21)<<endl;
    return 0;
}

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

double sum(double a, double b){
    return a+b;
}