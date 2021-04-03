#include<bits/stdc++.h>
using namespace std;

class Metric{
    int kms;
    int mts;

    public:
    Metric(int h){
        kms = h/1000;
        mts = h%1000;
    }

    void display(){
        cout<<kms<<" kms, "<<mts<<" meters"<<endl;
    }
};

int main(){
    int height = 8849;

    Metric m = height;
    // Metric m(height);
    m.display();
    // 8 kms, 849 meters
    return 0;
}