#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    // Person p;
    // Person *p_ptr = &p;

    Person *ptr = new Person("Kartavya",24);
    ptr->introduce();

    Person *ptr2 = new Person("Nitin",17);
    ptr2->introduce();

    return 0;
}