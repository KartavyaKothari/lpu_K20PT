#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Array{
    public:
    int arr[MAX];

    Array(){
        for(int i = 0 ; i < MAX ; i++){
            arr[i] = i+1;
        }
    }

    // void display(){
    //     for(int i = 0 ; i < MAX ; i++){
    //         cout<<setw(3)<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    friend void operator ++(Array &a);
    friend void operator !(Array &a);
    friend Array operator +(Array &a,Array &b);
    friend ostream& operator <<(ostream &out, Array &a);
};

void operator ++(Array &a){
    for(int i = 0 ; i < MAX ; i++)
        a.arr[i]++;
}

void operator !(Array &a){
    for(int i = 0 ; i < MAX ; i++)
        a.arr[i] = 0-a.arr[i];
}

Array operator +(Array &a,Array &b){
    Array res;
    for(int i = 0 ; i < MAX ; i++){
        res.arr[i] = a.arr[i]+b.arr[i];
    }
    return res;
}

ostream& operator <<(ostream &out, Array &a){
    for(int i = 0 ; i < MAX ; i++){
        out<<setw(3)<<a.arr[i]<<" ";
    }
    out<<endl;

    return out;
}

int main(){
    Array arr1;
    Array arr2;

    Array arr3 = arr1+arr2;
    // arr3.display();
    cout<<arr3;
    ++arr1;
    // arr1.display();
    cout<<arr1;
    !arr2;
    // arr2.display();
    cout<<arr2;
    return 0;
}