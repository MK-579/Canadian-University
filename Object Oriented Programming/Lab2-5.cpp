#include <iostream>
using namespace std;
class BankAccount
   {
      public:
         int 
            AccountNumber,Balance;
      void print() 
         {cout << "Account Number: " << AccountNumber << "\n" << "Balance: " << Balance << endl;}
   };
int main()
   {
      BankAccount BAT;
      cout << "Enter the Account Number: ";
      cin >> BAT.AccountNumber;
      cout << "Enter the Balance: ";
      cin >> BAT.Balance;
      BAT.print();
      return 0;
   }