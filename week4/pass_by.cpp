#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    a++;
}

void incre_by_ref(int &a){
    a++;
}

void incre_by_add(int *a){
    (*a)++;
}

int main(){
    int x = 10;
    cout<<x<<endl;

    incre_by_value(x);
    cout<<x<<endl;

    incre_by_ref(x);
    cout<<x<<endl;

    incre_by_add(&x);
    cout<<x<<endl;

    return 0;
}