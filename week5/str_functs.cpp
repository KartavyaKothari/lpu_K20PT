#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "ABC";

    cout<<name.size()<<endl;
    name.push_back('X');    
    cout<<name.size()<<endl;

    string str;

    for(int i = 0 ; i < 1000 ; i++){
        str.push_back('a');
        cout<<str.size()<<" "<<str.capacity()<<endl;
        str.shrink_to_fit();
        getchar();
    }
    return 0;
}