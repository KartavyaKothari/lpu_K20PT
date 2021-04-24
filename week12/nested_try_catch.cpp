#include<bits/stdc++.h>
using namespace std;

class Ball{
    public:
};

int main(){

    try{
        try{
            try{
                throw Ball();
            }catch(Ball e){
                cout<<"Ball caught just above the boundary, to save the boundary, I am rethrowing it"<<endl;
                throw;
            }
            cout<<"Insside second try"<<endl;
            // throw Ball();
        }catch(Ball e){
            cout<<"Ball caught outside the boundary, it's a wicket"<<endl;
        }
        cout<<"CSK wins"<<endl;
    }catch(Ball e){
        cout<<"CSK loses"<<endl;
    }

    return 0;
}