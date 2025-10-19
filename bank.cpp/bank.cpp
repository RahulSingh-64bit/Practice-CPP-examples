#include <iostream>
using namespace std;

class BankAccount
{
    private:
        double balance ;
    
    public:
        BankAccount(double openingBalance) //constructor
        {
            balance = openingBalance;
        }

        void deposit(double amount)  //makes deposit
        {
            balance = balance + amount ;
        }

        void withdraw(double amount) //makes withdrawal
        {
            balance = balance - amount ;
        }

        void display()
        {
            cout << "Balance =" << balance << endl ;
        }
            //end class BankAccount
};


int main()
{
    BankAccount ba1(100.00);

    cout << "Before transaction,";
    ba1.display();

    ba1.deposit(74.35);
    ba1.withdraw(20.00);

    cout<< "Afte Transaction,";
    ba1.display();
    return 0; 


}