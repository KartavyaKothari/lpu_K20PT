#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int mins;

    public:

    void operator =(int t){
        hours = t/60;
        mins = t%60;
    }

    void display(){
        cout<<hours<<":"<<mins<<endl;
    }
};

int main(){
    int mins_from_midnight = 349;
    Time t;

    t = mins_from_midnight;
    // t = mins_from_midnight+200;
    t.display();

    return 0;
}