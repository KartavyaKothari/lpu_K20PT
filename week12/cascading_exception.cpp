#include<bits/stdc++.h>
using namespace std;

void div(double a, double b){
    if(b==0){
        string err = "Div be zero exception";
        throw err;
    }
    cout<<a/b;
}

void func(double a, double b){
    div(a,b);
}

int main(){
    double a,b;
    cin>>a>>b;

    try{
        func(a,b);
    }catch(string err_msg){
        cout<<err_msg<<endl;
        cout<<"Dont worry we have the best testers in here"<<endl;
        // func(a,b);
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}