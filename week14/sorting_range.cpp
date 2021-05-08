#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[] = {54,22,6,33,1,76,245,2};
    vector<int> arr = {54,22,6,33,1,76,245,2};
    sort(arr.begin(),arr.end());
    // sort(arr,arr+8);
    
    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // B
    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    return 0;
}