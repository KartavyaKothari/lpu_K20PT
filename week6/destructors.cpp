#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Constructor called"<<endl;
    }
    ~Person(){
        cout<<"Destructor called"<<endl;
    }
};

void foo(){
    cout<<"Function called"<<endl;
    Person p;
    cout<<"Function ended"<<endl;
}

int main(){
    // Case 1
    // foo();

    // Case 2a
    // for(int i = 0 ; i < 3 ; i++){
    //     cout<<i<<endl;
    //     Person p;
    // }

    // Case 2b
    // switch (0){
    //     case 0:
    //         cout<<"Switch case 0"<<endl;
    //         Person p;
    //         cout<<"Swicth case ends"<<endl;
    //         break;
    // }

    // Case 3
    Person p;
    cout<<"Program ends"<<endl;
    return 0;
}