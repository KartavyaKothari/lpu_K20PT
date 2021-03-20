#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream f;
    f.open("arun.mcu",ios::out);

    if(!f){
        cout<<"Some error"<<endl;
        return 1;
    }

    f<<"Hello world!"<<endl;
    f.close();

    f.open("arun.mcu");
    f.seekg(6,ios::beg);

    // char A[7];
    // f.read(A,6);
    // A[6] = '\0';

    string A;
    f>>A;
    // getline(f,A);
    cout<<A;

    return 0;
}