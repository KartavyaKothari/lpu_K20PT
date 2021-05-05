#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,40,43};
    vector<int>::iterator itr;

    for(itr = arr.begin() ; itr != arr.end() ; itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator r_itr;
    
    for(r_itr = arr.rbegin() ; r_itr != arr.rend() ; r_itr++){
        cout<<*r_itr<<" ";
    }
    cout<<endl;

    return 0;
}