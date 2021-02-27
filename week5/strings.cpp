#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "ABC";

    cout<<name<<endl;
    // cout<<name[2]<<endl;

    name.push_back('X');
    cout<<name<<endl;

    name.pop_back();
    name.pop_back();
    name.pop_back();

    cout<<name<<endl;

    return 0;
}