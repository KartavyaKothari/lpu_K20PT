#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    int id;
    Person(int i){
        id = i;
        cout<<"Constructor called for id = "<<id<<endl;
    }
    ~Person(){
        cout<<"Destructor called for id = "<<id<<endl;
    }
};

int main(){
    int i = 0;

    Person p1(i++);
    Person p2(i++);
    Person p3(i++);
    
    return 0;
}