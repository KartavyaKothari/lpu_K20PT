#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    string names[15];
    int ages[15];

    // ifstream f;
    fstream f;
    f.open("outfile.kartavya",ios::in);

    if(! f){
        cout<<"Some error has happened"<<endl;
    }else{
        for(int i = 0 ; i < 15 ; i++){
            // f<<names[i]<<" "<<ages[i]<<endl;
            f>>names[i]>>ages[i];
        }

        for(int i = 0 ; i < 15 ; i++){
            cout<<names[i]<<" ";
            cout<<(ages[i]>=18?"is an adult":"is not an adult")<<endl;
        }

        f.close();
    }   
}