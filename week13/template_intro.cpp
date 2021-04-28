#include<bits/stdc++.h>
using namespace std;

template <class MYTYPE> 
MYTYPE get_sum(MYTYPE arr[], int size, MYTYPE v){
    MYTYPE sum = v;

    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }

    return sum;
}

// string get_sum(string arr[], int size, string v){
//     string sum = v;

//     for(int i = 0 ; i < size ; i++){
//         sum += arr[i];
//     }

//     return sum;
// }

// double get_sum(double arr[], int size, double v){
//     double sum = v;

//     for(int i = 0 ; i < size ; i++){
//         sum += arr[i];
//     }

//     return sum;
// }

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    double arr_d[] = {1.1,2.4,3.1,4.5,5.2,6.7,7.12,8.34,9.987,10.4};
    string arr_s[] = {"kartavya ","is ","a ","koala."};
    string var = "";

    cout<<get_sum<int>(arr,10,0)<<endl;
    cout<<get_sum<double>(arr_d,10,0.0)<<endl;
    cout<<get_sum<string>(arr_s,4,var)<<endl;

    return 0;
}