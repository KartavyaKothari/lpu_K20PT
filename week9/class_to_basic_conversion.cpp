#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    string name;
    int roll;

    public:
    Student(string n,int a, int r){
        age = a;
        name = n;
        roll = r;
    }

    operator string(){
        return name+" "+to_string(roll)+" "+to_string(age);
    }
};


class Time{
    int hours;
    int mins;

    public:
    Time(int h, int m){
        hours = h;
        mins = m;
    }
    
    operator int(){
        return hours*60+mins;
    }
};

int main(){
    Student s("Kartavya",24,21);
    Time t(5,34);

    string str = (string) s;
    // string str = s.operator string();
    cout<<str<<endl;

    int time_in_min = (int) t;
    cout<<time_in_min<<endl;

    return 0;
}