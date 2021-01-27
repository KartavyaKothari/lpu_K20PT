#include<bits/stdc++.h>
using namespace std;

// private
// public
// protected

class Person{
    int age;
    string name;

    public:
    Person(string n, int a){
        name = n;
        age = a;
    }

    void print_details(){
        cout<<"Hi, "<<name<<", you are "<<age<<" years old!";
    }
};

int main(){
    int age;
    string name;

    cout<<"What is your name good sir: ";
    cin>>name;

    cout<<"How old are you good sir: ";
    cin>>age;

    Person *p = new Person(name,age);

    p->print_details();

    return 0;
}