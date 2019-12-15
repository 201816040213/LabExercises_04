// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );

   void credit(double);
    bool debit(double);/* Write a function prototype for virtual function credit,
      which will redefine the inherited credit function */
   /* Write a function prototype for virtual function debit,
      which will redefine the inherited debit function */
private:
   double transactionFee; // fee charged per transaction

   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
