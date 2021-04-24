#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};

int main(){
    try{
        A a;
        throw 10;
    }catch(int c){
        cout<<"Exception"<<endl;
    }

    cout<<"Program ends"<<endl;
    return 0;
}