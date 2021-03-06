#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string n, int a)
        :name(n),age(a)
    {}

    // Person(string n, int a){
    //     name = n;
    //     age = a;
    // }
};

int main(){
    Person p1("Kartavya",24);
    cout<<p1.name<<" "<<p1.age<<endl;
    return 0;
}