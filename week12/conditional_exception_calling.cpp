#include<bits/stdc++.h>
using namespace std;

void hello(int a){
    cout<<a<<endl;
    if(a>10){
        cout<<endl;
        throw a;
    }
    
    try{
        hello(a+1);
    }catch(int e){
        cout<<a<<endl;
        throw;
    }
}

int main(){
    try{
        hello(0);
    }catch(int e){
        cout<<"Recursion step where overflow occured = "<<e<<endl;
    }

    return 0;
}