#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    
    char *arr = new (std::nothrow)char[a];
    if(arr){
        cout<<"Mem alloc success"<<endl;
    }else{
        cout<<"Mem alloc failed"<<endl;
    }

    cin>>a;

    // try{
    //     char *arr = new char[a];
    //     cout<<"Mem allocated sucessfully"<<endl;
    // }catch(const bad_alloc &e){
    //     cout<<e.what()<<endl;
    // }

    return 0;
}