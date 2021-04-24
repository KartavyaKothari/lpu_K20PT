#include<bits/stdc++.h>
using namespace std;

class Ball{
    public:
};

void func2(){
    try{
        throw Ball();   
    }catch(Ball e){
        cout<<"Handling inside func2"<<endl;
        throw;
    }
}

void func1(){
    try{
        func2();   
    }catch(Ball e){
        cout<<"Handling inside func1"<<endl;
        throw;
    }
}

int main(){

    try{
        func1();
    }catch(Ball e){
        cout<<"Final handling inside main"<<endl;
    }

    cout<<"Program executed without crashing"<<endl;

    return 0;
}