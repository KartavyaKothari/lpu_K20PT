#include<bits/stdc++.h>
using namespace std;

template <class T1,class T2> 
void max_a(T1 a, T2 b){
    cout<<(a>b?a:b)<<endl;
}   

int main(){
    max_a<int,double>(12,12.1);
    max_a(12.1,12);
    max_a(12,12);
    max_a(12.1,12.1);

    return 0;
}