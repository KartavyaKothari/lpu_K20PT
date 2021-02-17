#include<bits/stdc++.h>
using namespace std;

class Person{
    // public:
    string name;
    int age;

    protected:
    int balance;

    public:
    Person(string s, int a, int b){
        name = s;
        age = a;
        balance = b;
    }

    void introduce(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }

    friend class Government;
    friend void outsideAccess(Person);
};

class Government{
    public:
    void hackerman(Person p){
        cout<<p.name<<" "<<p.age<<" "<<p.balance<<endl;
    }
};

void outsideAccess(Person p){
    cout<<p.name<<" "<<p.age<<" "<<p.balance<<endl;
}

// Till now everyhting is clear?

int main(){
    Person p("Kartavya",24,10000);
    p.introduce();
    Government g;
    g.hackerman(p);

    outsideAccess(p);
    return 0;
}