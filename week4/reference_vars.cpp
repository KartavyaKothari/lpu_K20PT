#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int &a = x;
    // int &a;


    x++;
    cout<<x<<" "<<a<<endl;
    a++;
    cout<<x<<" "<<a<<endl;

    return 0;
}