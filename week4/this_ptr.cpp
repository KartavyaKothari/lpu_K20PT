#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        name = "Kartavya";
        age = 24;
    }
    
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Person *ptr = new Person();
    ptr->introduce();

    Person *ptr2 = new Person("Nitin",17);
    ptr2->introduce();

    return 0;
}