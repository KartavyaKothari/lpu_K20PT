#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;
    char gender;
    string name = "John";
    static string species;

    Person(string n, int a, char g){
        name = n;
        age = a;
        gender = g;
        // species = "Human";
    }

    void introduce(){
        cout<<"Hi, I am "<<name<<" I am "<<age<<" years old and identify as "<<species<<endl;
    }

    static void change_species(string n){
        species = n;
    }

    // static void whats_my_spe
};

string Person::species = "Homo sapeiens";

int main(){
    Person p1("Kartavya",23,'M');
    Person p2("Varun",21,'M');
    // Person p3("Tanya",17,'F');

    cout<<p1.species<<endl;

    // p1.introduce();
    // p2.introduce();
    Person::change_species("Koala sapiens");
    // p3.introduce();
    p1.introduce();
    p2.introduce();

    // Person::species = "Koala";

    // cout<<Person::species<<endl;
    // p4.introduce();
    return 0;
}