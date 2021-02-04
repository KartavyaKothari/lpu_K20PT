#include<bits/stdc++.h>
using namespace std;

// private
// public
// protected 

struct transaction{
    bool is_deposit;
    int amt;
};

class Account{
    int acc_num;
    int balance;
    string pass;
    struct transaction transactions[100];
    int last_in;

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
        last_in = -1;
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

            last_in++;
            transactions[last_in] = {false,amt};

            balance = balance-amt;
            cout<<"Withdrawing "<<amt<<" rupess. ";
            check_balance(p);
        }
    }

    void deposit_money(string p, int amt){
        if(check_pass(p)){
            last_in++;
            transactions[last_in] = {true,amt};
            balance = balance+amt;
            cout<<"Adding "<<amt<<" rupess. ";
            check_balance(p);
        }
    }

    void print_transaction_history(string p){
        if(!check_pass(p))
            return;
        
        cout<<endl<<"*** Printing transaction history ***"<<endl;

        for(int i = 0 ; i <= last_in ; i++){
            if(transactions[i].is_deposit){
                cout<<"Deposited "<<transactions[i].amt<<" rupees"<<endl;
            }else cout<<"Withdrew "<<transactions[i].amt<<" rupees"<<endl;
        }

        cout<<"***        ***"<<endl<<endl;
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

    // Account p1(1,100,"pas@123");
    // p1.check_balance("pas@123");
    // p1.deposit_money("pas@123",500);
    // p1.withdraw_money("pas@123",1000);
    // p1.deposit_money("pas@123",500);
    // p1.withdraw_money("pas@123",1000);
    // p1.print_transaction_history("pas@123");

    Account *p1 = new Account(1,100,"pas@123");
    
    p1->check_balance("pas@123");
    p1->deposit_money("pas@123",500);
    p1->withdraw_money("pas@123",1000);
    p1->deposit_money("pas@123",500);
    p1->withdraw_money("pas@123",1000);
    p1->print_transaction_history("pas@123");

    return 0;
}