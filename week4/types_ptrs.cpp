#include<bits/stdc++.h>
using namespace std;

int *sum(int a, int b){
    int res = a+b;
    return &res;
}

int main(){
    // 1) wild or uninitialized pointers

    int var = 10;
    int *ptr_v;
    // cout<<*ptr_v;

    // 2) NULL pntr

    int *ptr = nullptr;
    int *ptr2 = NULL;

    // 3) Dangling pntr
    int *res = sum(10,20);
    cout<<*res;

    return 0;
}