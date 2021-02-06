#include<bits/stdc++.h>
using namespace std;

// public
// private
// protected

// class myClass{};

class Person{
    protected:
    int age;
    char gender;
    string name;

    public:
    Person(){
        name = "John";
        age = 18;
        gender = 'M';
    }
    Person(string n, int a, char g){
        name = n;
        age = a;
        gender = g;
    }

    void introduce(){
        cout<<"Hi, I am "<<name<<" I am "<<age<<" years old and identify as "<<gender<<endl;
    }

    void is_adult();
};



void Person::is_adult(){
    if(age>=18){
        cout<<name<<" is an adult"<<endl;
    }else{
        cout<<name<<" is not an adult"<<endl;
    }
}

// class Friend: public Person{
//     public:
//     Friend(string n, int a, char g){
//         name = n;
//         age = a;
//         gender = g;
//     }
// };

void is_adult(Person p){
    p.is_adult();
}

int main(){
    Person p1("Kartavya",23,'M');
    Person p2("Varun",21,'M');
    Person p3("Tanya",17,'F');
    Person p4;

    // p1.introduce();
    // p2.introduce();
    // p3.introduce();
    // p4.introduce();

    // p1.is_adult();
    // p2.is_adult();
    // p3.is_adult();
    // p4.is_adult();

    is_adult(p3);

    // p1.name = "Kartavya";
    return 0;
}