#include<bits/stdc++.h>
using namespace std;

class Movies{
    string movie_name;
    double imdb;
    double rate;
    string status;
    
    public:
    Movies(string movie_name,double imdb,double rate,string status):
        movie_name(movie_name),
        imdb(imdb), 
        rate(rate), 
        status(status) 
    {}
    
    void display(){
        cout<<movie_name<<", rating by imdb "<<imdb<<", rate "<<rate<<"/5, status "<<status<<endl;
    }
};

class User_login{
    string user_name;
    string password;
    
    public:
    User_login(string un, string pw):
        user_name(un),
        password(pw)
    {}
    
    void display(){
        cout<<"Username = "<<user_name<<" Password = "<<password<<endl;
    }
    
    bool check_detail(string um ,string pw){
        cout<<user_name<<endl;
        cout<<password;
        // cout<<"ERRRRRRR"<<endl;
        if(um == user_name && pw == password){
            cout<<"successfully login"<<endl;
            return true;
        }else{
            cout<<"Either username or passowrd is wrong "<<endl;
            return false;
        }
    }
};

class Base{
    public:
    Movies *movie[5];
    User_login *user;
    public:
    Base(){
        movie[0] = new Movies("Gravity" , 9.2, 4.5, "UA");
        movie[1] = new Movies("Intersteller" , 9.2, 4.5, "UA");
        movie[2] = new Movies("Escape Room" , 9.2, 4.5, "UA");
        movie[3] = new Movies("Inception" , 9.2, 4.5, "UA");
        movie[4] = new Movies("DAY-Z" , 9.2, 4.5, "UA");
    }
    
    void sign_up(){
        string pw,un;
        cout<<"Set your username : ";
        cin>>un;
        
        cout<<"Set your Password :";
        cin>>pw;
        
        user = new User_login(un,pw);
        user->display();
        // user = p1;
    }

    void log_in(){
        string un,pw;
        cout<<"Enter your username : ";cin>>un;
        cout<<"Enter your password : ";cin>>pw;
        // User_login *p2;
        user->check_detail(un,pw);
    }

    void show_movie_list(){
        for(int i =0;i<5;i++){
            movie[i]->display();
        }
    }
};

int main()
{
    Base a;
    a.sign_up();
    a.log_in();
    return 0;
}