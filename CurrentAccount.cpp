#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(float aValue, int anAccountID) : Account(aValue, anAccountID) { } 

void CurrentAccount::Withdraw(float aValue) { 
	cout << "Current account." << endl; 
	Account::Withdraw(aValue); 
}