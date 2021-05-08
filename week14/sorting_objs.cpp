#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int phone;
    int age;
    int height;

    Student(int a, int b, int c, int d){
        roll = a;
        phone = b;
        age = c;
        height = d;
    }

    void display(){
        cout<<"R: "<<roll<<", P: "<<phone<<", A: "<<age<<", H: "<<height<<endl;
    }
};

bool cmp(Student a, Student b){
    return a.height<b.height;
}

int main(){
    vector<Student> arr;
    arr.push_back(Student(23,64,11,345));
    arr.push_back(Student(23,456,64,1));
    arr.push_back(Student(76,887,11111,99));
    arr.push_back(Student(76,4,1,45));

    // if(is_sorted(arr.begin(), arr.end(),cmp)){
    //     cout<<"Sorted"<<endl;
    // }else{
    //     cout<<"Not sorted"<<endl;
    // }

    sort(arr.begin(),arr.end(),cmp);

    // for(Student s: arr){
    //     s.display();
    // }

    return 0;
}