#include<bits/stdc++.h>
using namespace std;

// private
// public
// protected 

class Account{
    int acc_num;
    int balance;
    string pass;

    bool check_pass(string p){
        if(p==pass){
            return true;
        }else{
            cout<<"Wrong password"<<endl;
            return false;
        };
    }

    public:
    Account(int an, int bal, string p){
        acc_num = an;
        balance = bal;
        pass = p;
    }

    void check_balance(string p){
        if(check_pass(p)){
            cout<<"Your account balance is "<<balance<<" rupees"<<endl;
        }
    }

    void withdraw_money(string p, int amt){
        if(check_pass(p)){
            if(amt>balance){
                cout<<"Not sufficient funds"<<endl;
                return;
            }

            balance = balance-amt;
            cout<<"Withdrawing "<<amt<<" rupess. ";
            check_balance(p);
        }
    }

    void deposit_money(string p, int amt){
        if(check_pass(p)){
            balance = balance+amt;
            cout<<"Adding "<<amt<<" rupess. ";
            check_balance(p);
        }
    }
};

int main(){
    // Deposit
    // Withdraw
    // Check balance
    // Acc num
    
    // Loan
    // Transiction history
    // Transfer money

    Account p1(1,100,"pas@123");
    p1.check_balance("pas@123");
    p1.deposit_money("pas@123",500);
    p1.withdraw_money("pas@123",1000);
    p1.deposit_money("pas@123",500);
    p1.withdraw_money("pas@123",1000);

    return 0;
}