#include<bits/stdc++.h>
using namespace std;

// fact(n) = n*fact(n-1)

int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

// 1 2 3 4 5 6 7
// 1 1 2 3 5 8 13 21 34 55
// fibo(n) = fibo(n-1) + fibo(n-2)
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;

    // int res = 1;
    // for(int i = 1 ; i <= n ; i ++){
    //     // res *= i;
    //     res = res*i;
    // }

    // cout<<n<<"! = "<<fact(n)<<endl;
    cout<<"fibo("<<n<<") = "<<fibo(n)<<endl;

    return 0;
}