#include<iostream>
#include<string>
using namespace std;

class bankaccount{
  private:
         string accountNumber;
         double balance;
  public:
        bankaccount(string accNo, double bal){
            accountNumber = accNo;
            balance = bal;
        }

    //getter..for balance...
    double getbalance() const{
        return balance;
    }

    //method for deposit..
    void deposit(double amount){
        if (amount > 0)
        {
            balance += amount;
            cout<<"Deposit:"<<amount<<endl;
        }else{
            cout<<"Invalid deposit amount"<<endl;
        }  
    }
    
    //method for withdrown...
    void withdrown(double amount){
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout<<"withdrown:"<<amount<<endl;
        }else{
            cout<<"Invalid withdrown amount"<<endl;
        }  
    }

};
int main()
{
    bankaccount myAccount("92939495", 500);

    myAccount.getbalance();
    myAccount.deposit(300);
    myAccount.withdrown(100);

return 0;
}