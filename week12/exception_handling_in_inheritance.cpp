#include<bits/stdc++.h>
using namespace std;

class Parent{};
class Child: virtual public Parent{};

int main(){
    Child c;
    try{
        throw c;
    }catch(Parent p){
        cout<<"Parent exception caught"<<endl;
    }catch(Child e){
        cout<<"Child exception called"<<endl;
    }
    // try{
    //     throw c;
    // }catch(Child e){
    //     cout<<"Child exception called"<<endl;
    // }catch(Parent p){
    //     cout<<"Parent exception caught"<<endl;
    // }
    return 0;
}