#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;

    try{
        if(b==0){
            string err = "Div be zero exception";
            throw err;
        }
        cout<<a/b<<endl;
    }catch(string err_msg){
        cout<<err_msg<<endl;
        cout<<"Dont worry we have the best testers in here"<<endl;
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}