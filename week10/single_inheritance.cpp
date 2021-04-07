#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
    int species_code;

    protected:
    void respiration(){
        cout<<"Using glucose and oxygen to generate energy"<<endl;
    }

    void digestion(){
        cout<<"Digesting food to create glucose"<<endl;
    }
};

class Koala:public Animal{
    public:
    void eat(){
        cout<<"Eating eucalpytus leaves"<<endl;
        digestion();
    }

    void breathe(){
        cout<<"Breathe in australian air"<<endl;
        respiration();
    }
};

int main(){
    Koala k;
    k.eat();
    k.breathe();

    return 0;
}