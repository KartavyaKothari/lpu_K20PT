#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    string names[] = {"Gokul","Dinesh","Ashish","Nitin","Kartavya"};
    int ages[] = {23,55,11,23,12};

    fstream f;
    // ofstream f;
    f.open("outfile.kartavya",ios::out);
    // f.open("outfile.kartavya",ios::app);

    if(! f){
        cout<<"Some error has happened"<<endl;
    }else{
        for(int i = 0 ; i < 5 ; i++){
            f<<names[i]<<" "<<ages[i]<<endl;
        }

        f.close();
    }   
}