#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Kartavya";

    // for(int i = 0 ; i < name.size() ; i++){
    //     cout<<name[i];
    // }

    // string::iterator my_itr;

    for(auto my_itr = name.begin() ; my_itr != name.end() ; my_itr++){
        cout<<*my_itr<<" ";
    }

    // reverse(name.begin(),name.end());
    cout<<name;

    // string::reverse_iterator rev_itr;

    for(auto rev_itr = name.rbegin() ; rev_itr != name.rend() ; rev_itr++){
        cout<<*rev_itr<<" ";
    }

    cout<<endl;

    return 0;
}