#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Cons called"<<endl;
    }
    ~A(){
        cout<<"Des called"<<endl;
    }
};

void func(){
    A *arr = new A[10];
    // A arr[10];
}

int main(){
    // A *arr = new A[10];
    // A arr[10];
    func();
    cout<<"In main"<<endl;
    // cout<<endl;

    // delete[] arr;
    return 0;
}