#include<bits/stdc++.h>
using namespace std;

class OMG{
    public:
    string msg;
    int err_code;
    OMG(string m, int c){
        msg = m;
        err_code = c;
    }
};

int main(){
    double a,b;
    cin>>a>>b;

    try{
        if(b==0) throw "This is string err";
        if(a==0) throw 0;
        throw OMG("This is a err",404);
    }catch(...){
        cout<<"Some err"<<endl;
    }

    cout<<"Everyone lived happiliy ever after"<<endl;

    return 0;
}