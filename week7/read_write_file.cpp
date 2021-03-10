#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    string names[5];
    int ages[5];

    // ifstream f;
    fstream f;
    f.open("outfile.kartavya");
    // f.open("outfile.kartavya",ios::in | ios::out);

    if(! f){
        cout<<"Some error has happened"<<endl;
    }else{
        for(int i = 0 ; i < 5 ; i++){
            f>>names[i]>>ages[i];
        }

        for(int i = 0 ; i < 5 ; i++){
            f<<names[i]<<" ";
            f<<(ages[i]>=18?"is an adult":"is not an adult")<<endl;
        }

        f.close();
    }   
}