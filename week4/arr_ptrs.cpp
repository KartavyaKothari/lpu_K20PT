#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    // int *arr == int arr[];
    // data_type *ptr; ptr+n==add(ptr)+n*sizeof(data_type)

    // cout<<arr<<" "<<&arr[0]<<endl;
    // cout<<arr+1;

    // arr[i] == *(arr+i)
    int *ptr = arr+4;

    for(int i = 0 ; i < 5 ; i++){
        cout<<*(arr+i)<<endl;
    }

    cout<<endl<<endl;

    for(int i = 0 ; i < 5 ; i++){
        cout<<*(ptr-i)<<endl;
    }

    return 0;
}