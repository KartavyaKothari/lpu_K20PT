#include<bits/stdc++.h>
using namespace std;

// private
// public
// protected

enum Weekday{
    Mon = 101,
    Tues,
    Wed,
    Kartavya = 6,
    Tanya,
    Varun
};

struct Node{
    int val;
    char gender;
};

union Node{
    int val;
    int gender;
    char dog[1000];
};

class Person{
    int age;
    string name;

    public:
    static string species;

    Person(string n, int a){
        name = n;
        age = a;
    }

    void print_details(){
        cout<<"Hi "<<species<<", "<<name<<", you are "<<age<<" years old!";
    }
};

void cnt_up(){
    // auto cnt = 0;
    static int cnt = 0;
    cnt++;
    cout<<cnt<<endl;
}

string Person::species = "human";

int main(){
    // cnt_up();
    // cnt_up();
    // cnt_up();

    int age;
    string name;

    cout<<"What is your name good sir: ";
    cin>>name;

    cout<<"How old are you good sir: ";
    cin>>age;

    Person *p = new Person(name,age);
    Person *p1 = new Person("Nitin",20);

    p->print_details();
    p1->print_details();

    return 0;
}