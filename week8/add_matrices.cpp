#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int arr[10][10];
    
    Matrix(){
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                arr[i][j] = (i+1)*(j+1);
            }
        }
    }

    void display(){
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cout<<setw(3)<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator +(Matrix b){
        Matrix res;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                res.arr[i][j] = arr[i][j] + b.arr[i][j];
            }
        }

        return res;
    }
};

int main(){
    Matrix a;
    Matrix b;

    Matrix c = a+b;

    // Homework
    // Matrix d = a-b;
    // Matrix e = a^b; // multiply

    c.display();
    return 0;
}