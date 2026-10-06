#include <iostream>
#include <string>
using namespace std;

class BankSystem
{
public:

    
    class SavingAccount
    {
    private:
        string acc_name;
        int acc_no;
        double balance;
        double interest_rate;

    public:

        
        SavingAccount(string name, int no, double bal, double rate)
        {
            acc_name = name;
            acc_no = no;
            balance = bal;
            interest_rate = rate;
        }

        
        void deposit(double amount)
        {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }

        
        void withdraw(double amount)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Amount withdrawn successfully." << endl;
            }
            else
            {
                cout << "Insufficient balance!" << endl;
            }
        }

       
        void apply_interest()
        {
            double interest = balance * interest_rate / 100;
            balance += interest;

            cout << "Interest added: " << interest << endl;
        }

        
        void display()
        {
            cout << "\n--- Saving Account Details ---" << endl;
            cout << "Account Name   : " << acc_name << endl;
            cout << "Account Number : " << acc_no << endl;
            cout << "Balance        : " << balance << endl;
            cout << "Interest Rate  : " << interest_rate << "%" << endl;
        }
    };


    
   