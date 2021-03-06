#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    const string name;
    int &age;
    Person(string name, int &age)
        :name(name),age(age)
    {}

    // Person(string name, int &age){
    //     this->name = name;
    //     this->age = age;
    // }
    void birthday(){
        age++;
    }
};

int main(){
    int age = 24;
    cout<<age<<endl;
    Person p1("Kartavya",age);
    p1.birthday();
    cout<<age<<endl;
    // cout<<p1.name<<" "<<p1.age<<endl;
    return 0;
}