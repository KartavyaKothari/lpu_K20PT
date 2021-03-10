#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    fstream f;
    f.open("outfile.kartavya",ios::out);

    if(! f){
        cout<<"Some error has happened"<<endl;
    }else{
        cout<<"File opened successfully"<<endl;
        f.close();
    }

    
}