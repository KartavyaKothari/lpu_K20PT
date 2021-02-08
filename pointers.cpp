#include<iostream>
using namespace std;

int main(){
    int var1 = 10;
    int var2 = 100;
    
    int *ptr1;
    ptr1 = &var1;
    int **ptr2;
    ptr2 = &ptr1;
    int ***ptr3;
    ptr3 = &ptr2
    
    **ptr3 = &var2;
    **ptr2 = 1000;
    *ptr1 = 1;
    
    cout<<var1<<" "<<var2<<endl;
}