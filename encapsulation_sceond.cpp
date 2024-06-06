#include <iostream>
using namespace std;

class BankAccount{
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    void setAccount(string an,string ah,double bl){
       accountNumber= an;
       accountHolder=ah;
       balance=bl;
    }
    double getBalance(){
        return balance;
    }
    string getAccountNumber(){
        return accountNumber;
    }
    string getAccountHolder(){
        return accountHolder;
    }
} ;
int main(){
    BankAccount bl;
    bl.setAccount("012233","Karim",10000);
    cout << "Account Number: " << bl.getAccountNumber() << endl;
    cout << "Account Holder: " << bl.getAccountHolder() << endl;
    cout << "Balance: " << bl.getBalance() << endl;
}
