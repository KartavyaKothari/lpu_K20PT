#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {45,12,675,23,7,1};
    list<int> lst = {5,77,3,55,24,11};

    lst.sort();
    for(auto it = lst.begin() ; it != lst.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(arr.begin(),arr.end());

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}