#include "Account.h" 

Account::Account(float aValue = 0.0, int anAccountID = 0) :value(aValue), AccountID(anAccountID) { } 

void Account::Deposit(float aValue) { 
	value += aValue; 
	cout << aValue << " has been deposited to account #: " << AccountID << endl; 
} 

void Account::Withdraw(float aValue) { 
	value -= aValue; 
	cout << aValue << " has been withdrawl from account #: " << AccountID << endl; 
} 

void Account::GetBalance() { 
	cout << AccountID << " has total balance of Rs. " << value << " /-." << endl; 
}