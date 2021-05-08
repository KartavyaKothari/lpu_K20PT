#include<bits/stdc++.h>
using namespace std;

int sum_dig(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

bool cmp(int a, int b){
    return sum_dig(a)<sum_dig(b);
}

void bubble_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if(!cmp(arr[i],arr[j])){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    vector<int> arr = {54,22,6,33,1,76,245,2,11111,9};
    sort(arr.begin(),arr.end(),cmp);
    
    // bubble_sort(arr);

    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    return 0;
}