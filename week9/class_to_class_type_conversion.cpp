#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int mts;
    int cms;

    Metric(){}
    
    Metric(double h){
        kms = ((int) h)/1000;
        mts = ((int) h)%1000;
        cms = (h-(int) h)*100;
    }

    void display(){
        cout<<kms<<" kms, "<<mts<<" meters and "<<cms<<" centimeters"<<endl;
    }

    operator double(){
        double height = kms*1000+mts+(double)cms/100;
        return height;
    }
};

class Imperial{
    int miles;
    int feet;
    int inches;
    public:
    Imperial(Metric m){
        double h = (double) m;
        miles = m.kms*0.621371;
        feet = m.mts*3.28084;
        inches = m.cms*0.393701;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches"<<endl;
    }

    operator Metric(){
        Metric m;
        m.kms = miles/0.621371;
        m.mts = feet/3.28084;
        m.cms = inches/0.393701;

        return m;
    }
};

int main(){
    double height = 8848.86;
    Metric h_m = height;
    h_m.display();

    Imperial h_i = h_m;
    h_i.display();

    h_m = (Metric)h_i;
    h_m.display();

    return 0;
}