#include<bits/stdc++.h>
using namespace std;

int main(){
    int *arr = new int[10];
    // arr[3] = 10;
    *(arr+3) = 10;
    cout<<*(arr+3); 

    return 0;
}