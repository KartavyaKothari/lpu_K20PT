#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Default cons called"<<endl;
    }

    Person(string name, int age){
        cout<<"Parm cons 1 called, name = "<<name;
        cout<<", age = "<<age<<endl;
    }

    Person(string name){
        cout<<"Parm cons 2 called, name = "<<name<<endl;
        // cout<<", age = "<<age<<endl;
    }

    Person(int age){
        cout<<"Parm cons 3 called";
        cout<<", age = "<<age<<endl;
    }
};

int main(){
    Person p1;
    Person p2("Kartavya",12);
    Person p5("Dinesh",124);
    Person p3("Kartavya");
    Person p4(12);
    return 0;
}