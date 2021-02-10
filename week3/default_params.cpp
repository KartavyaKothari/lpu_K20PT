#include<bits/stdc++.h>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0){
    return a+b+c+d+e;
}

int main(){
    cout<<sum()<<endl;
    cout<<sum(1)<<endl;
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,3,4)<<endl;
    cout<<sum(1,2,3,4,5)<<endl;

    return 0;
}