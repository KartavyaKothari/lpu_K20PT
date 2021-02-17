#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 1 ; i < 1000000 ; i*=10){
        cout<<setfill('-')<<setw(10)<<i<<" "<<setw(10)<<i*2<<" "<<setw(10)<<i*3<<endl;
    }

    cout<<endl<<endl;

    double PI = 3.14535234;

    cout<<PI<<endl;
    cout<<setprecision(5)<<PI<<endl;
    cout<<setprecision(1)<<PI<<endl;

    cout<<endl<<endl;

    cout<<setbase(10)<<100<<endl;
    cout<<setbase(8)<<100<<endl;
    cout<<setbase(16)<<100<<endl;

    return 0;
}