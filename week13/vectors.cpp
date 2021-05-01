#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
void display(vector<TYPE> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    // for(TYPE a: arr){
    //     cout<<a<<" ";
    // }

    cout<<endl;
}

int main(){
    vector<int> arr;
    // cout<<arr.size()<<endl;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    
    arr.pop_back();
    // arr.push_front(10);

    display(arr);

    vector<string> strs = {"This ","is ","clear"};
    display(strs);

    // arr[2] = 12;

    return 0;
}