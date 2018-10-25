#include "SavingsAccount.h" 

SavingsAccount::SavingsAccount(float aValue, int anAccountID) : Account(aValue,anAccountID) { } 

void SavingsAccount::Withdraw(float aValue) { 
	cout << "Savings Account." << endl; 
	Account::Withdraw(aValue); 
}