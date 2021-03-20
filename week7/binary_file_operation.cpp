#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
};

int main(){
    fstream f;
    f.open("myobj_lst.nitin",ios::trunc|ios::out|ios::binary);
    if(!f) return 1;

    struct Student arr[] = {
        {"Kartavya",24},
        {"Nitin",12},
        {"Arun",47},
        {"Lakshya",17},
        {"Dinesh",72}
    };

    for(int i = 0 ; i < 5 ; i++){
        // f<<arr[i].name<<" "<<arr[i].age<<endl;
        f.write((char *) &arr[i],sizeof(Student));
        if(!f.good()){
            return 1;
        }
    }

    f.close();

    struct Student new_arr[5];
    
    f.open("myobj_lst.nitin",ios::in|ios::binary);
    if(!f) return 1;

    for(int i = 0 ; i < 5 ; i++){
        f.read((char *) &new_arr[i],sizeof(Student));
        // struct Student s;
        // f>>s.name>>s.age;
        // new_arr[i] = s;
    }

    for(int i = 0 ; i < 5 ; i++){
        cout<<new_arr[i].name<<" "<<new_arr[i].age<<endl;
    }

    return 0;
}