#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> solar_system = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Neptune","Uranus"};
    vector<string>::iterator milano = solar_system.begin();
    vector<string>::iterator falcon = solar_system.begin();

    //advance()
    cout<<"Milano is at "<<*milano<<endl;
    advance(milano,3);
    cout<<"Milano has reached "<<*milano<<endl;
    advance(milano,-1);
    cout<<"Milano has reached "<<*milano<<endl;

    cout<<endl;

    // advance(itr,12);
    // itr = next(itr,12);

    vector<string>::iterator escape_pod = next(milano,2);
    cout<<"Milano is at "<<*milano<<endl;
    cout<<"Escape pod is at "<<*escape_pod<<endl;

    cout<<endl;

    cout<<"Falcon is "<<distance(falcon,escape_pod)<<" planets away"<<endl;
    // advance(escape_pod,distance(escape_pod,falcon));
    escape_pod = next(escape_pod,distance(escape_pod,falcon));
    cout<<"Escape pod is at "<<*escape_pod<<endl;

    return 0;
}