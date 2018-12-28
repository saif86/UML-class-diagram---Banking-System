#include "Account.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Account Default + Overloaded Constructor
Account::Account(int aAccountID, float aValue) : mAccountID(aAccountID), mValue(aValue) {
	this->SetAccount(aAccountID, aValue);
}
// end Account constructor


//============================= OPERATIONS ===================================

// function that deposits amount.
void Account::Deposit(float aAmount) {
	if (aAmount < 0.0)
		cout << "ERROR: Deposit amount cannot be nagative." << endl;
	else {
		this->mValue += aAmount;
		cout << aAmount << " has been deposited to account #: " << this->GetAccountID() << endl;
	}
}
// end function Deposit

// function that withdraws amount.
void Account::Withdraw(float aAmount) {
	if (aAmount < 0.0)
		cout << "ERROR: Withdrawn amount cannot be nagative." << endl;
	else if(aAmount > this->GetValue()){
		cout << "ERROR: Withdrawn amount exceeds available balance." << endl;
	}
	else {
		this->mValue -= aAmount;
		cout << aAmount << " has been withdrawl from account #: " << this->GetAccountID() << endl;
	}
}
// end function Withdraw

// function that withdraws amount.
void Account::PrintBalance()const {
	cout << this->GetAccountID() << " has total balance of Rs. " << this->GetValue() << " /-." << endl;
}
// end function PrintBalance



//============================= ACESS      ===================================

// function that sets ID of Account
void Account::SetAccountID(int aAccountID) {
	if (aAccountID < 0.0)
		cout << "ERROR: Account ID cannot be nagative." << endl;
	else 
		this->mAccountID = aAccountID;
}
// end function SetAccountID

// function that sets value of Account
void Account::SetValue(float aValue) {
	if (aValue < 0.0)
		cout << "ERROR: Account value cannot be nagative." << endl;
	else
		this->mValue = aValue;
}
// end function SetValue

// function that sets Account
void Account::SetAccount(int aAccountID, float aValue) {
	this->SetAccountID(aAccountID);
	this->SetValue(aValue);
}
// end function SetAccount

// Overloaded function that sets the Account
void Account::SetAccount(const Account& obj) {
	this->SetAccount(obj.GetAccountID(), obj.GetValue());
}
// end function SetAccount

// function that gets ID of Account
int Account::GetAccountID()const {
	return this->mAccountID;
}
// end function GetAccountID

// function that gets value of Account
float Account::GetValue()const {
	return this->mValue;
}
// end function GetValue

// function that gets the Account
const Account& Account::GetAccount()const {
	return *this;
}
// end function GetAccount
