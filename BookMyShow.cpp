#include<bits/stdc++.h>
using namespace std;

class Movie{
    private:
    string name;
    double imdb;
    bool is_adult;
    
    public:
    Movie(string name, double imdb, bool is_adult):
        name(name),
        imdb(imdb),
        is_adult(is_adult)
    {}

    void display(){
        cout<<name<<", "<<(is_adult?"A":"UA")<<", IMDB: "<<imdb<<endl;
    }
};

class Theatre{
    private:
    string name;
    public:
    Theatre(string name){
        this->name = name;
    }
    void display(){
        cout<<name<<endl;
    }
};

// class User{
//     public:
//     string name;
//     string email;
//     string pass;
// };

class Booking{
    public:
    Movie *m;
    Theatre *t;
    bool is_morning_show;
    Booking(Movie *m, Theatre *t, bool is_morning_show):
        m(m),
        t(t),
        is_morning_show(is_morning_show)
    {}
    
    void display(){
        m->display();
        t->display();
        cout<<"Time: "<<(is_morning_show?"Morning":"Evening")<<endl;
    }
};

class BookMyShow{
    Movie* movies[3];
    Theatre* theatres[3];
    Booking *bookings[100];
    int last_booking_index;

    public:
    BookMyShow(){
        movies[0] = new Movie("Deadpool",8.7,true);
        movies[1] = new Movie("Endgame",9.2,false);
        movies[2] = new Movie("Logan",9.6,true);

        theatres[0] = new Theatre("Cinepolis mumbai");
        theatres[1] = new Theatre("PVR chennai");
        theatres[2] = new Theatre("IMAX banglore");

        last_booking_index = -1;
    }

    void start_screen(){
        int movie;
        int theatre;

        bool is_continue = true;
        while(is_continue){
            main_menu_options();
            switch(get_res()){
                case 1:
                    show_movies_list();
                    movie = get_res();

                    show_theatre_list();
                    theatre = get_res(); 

                    add_booking(movies[movie-1],theatres[theatre-1],get_slot());
                    break;
                case 2:
                    show_bookings();
                    cout<<endl;
                    break;
                case 3:
                    is_continue = false;
                    break;
            }
        }
    }

    bool get_slot(){
        cout<<"1. Morning show"<<endl;
        cout<<"2. Evening show"<<endl;
        int slot = get_res();

        return (slot==1);
    }

    int get_res(){
        cout<<"Response: ";
        int res;
        cin>>res;
        return res;
    }

    void main_menu_options(){
        cout<<"1. Book a movie"<<endl;
        cout<<"2. Check past bookings"<<endl;
        cout<<"3. Exit app"<<endl;
    }

    void show_movies_list(){
        for(int i = 0 ; i < 3 ; i++){
            cout<<(i+1)<<". ";
            movies[i]->display();
        }
    }

    void show_theatre_list(){
        for(int i = 0 ; i < 3 ; i++){
            cout<<(i+1)<<". ";
            theatres[i]->display();
        }
    }

    void add_booking(Movie *m, Theatre *t, bool is_morning_show){
        last_booking_index++;
        bookings[last_booking_index] = new Booking(m,t,is_morning_show);
    }

    void show_bookings(){
        for(int i = 0 ; i <= last_booking_index ; i++){
            cout<<"Booking #"<<(i+1)<<endl;
            cout<<endl;
            bookings[i]->display();
            cout<<"=============="<<endl;
        }
    }
};

int main(){
    BookMyShow bms;
    bms.start_screen();
    cout<<"Thanks for using my app"<<endl;

    return 0;
}