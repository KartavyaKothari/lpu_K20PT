#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eat anything that moves"<<endl;
    }
};

class Human : public Animal{
    public:
    void eat(){
        Animal::eat();
        cout<<"Eat safe things"<<endl;
    }
};
class Vegetarian : public Human{
    public:
    void eat(){
        Animal::eat();
        Human::eat();
        cout<<"Eat vegetables"<<endl;
    }
};

int main(){
    Animal a;
    a.eat();
    cout<<endl;
    Human h;
    // h.Animal::eat();
    h.eat();
    cout<<endl;
    Vegetarian v;
    v.eat();
    return 0;
}