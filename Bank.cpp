#include "Bank.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Bank Default + Overloaded Constructor
Bank::Bank(const string& aName, int aBranchCode, Account* aAccount) :  mName(aName), mBranchCode(aBranchCode), mAccount(aAccount) {
	this->SetBank(aName, aBranchCode, aAccount);
}
// end Bank constructor


//============================= OPERATIONS ===================================

// function that shows balance.
void Bank::ShowBalance()const {
	cout << "Bank: " << this->GetName() << endl;
	cout << "Branch Code: " << this->GetBranchCode() << endl;
	mAccount->PrintBalance();
}
// end function ShowBalance



//============================= ACESS      ===================================

// function that sets name of Bank
void Bank::SetName(const string& aName) {
	this->mName = aName;
}
// end function SetName

// function that sets code of Branch
void Bank::SetBranchCode(int aBranchCode) {
	if (aBranchCode < 0.0)
		cout << "ERROR: Branch code cannot be nagative." << endl;
	else
		this->mBranchCode = aBranchCode;
}
// end function SetBranchCode

// function that sets account of Bank
void Bank::SetAccount(Account* aAccount) {
	this->mAccount = aAccount;
}
// end function SetAccount

// function that sets Bank
void Bank::SetBank(const string& aName, int aBranchCode, Account* aAccount) {
	this->SetName(aName);
	this->SetBranchCode(aBranchCode);
	this->SetAccount(aAccount);
}
// end function SetBank

// Overloaded function that sets the Bank
void Bank::SetBank(const Bank& obj) {
	this->SetBank(obj.GetName(), obj.GetBranchCode(), obj.GetAccount());
}
// end function SetBank

// function that gets name of Bank
const string& Bank::GetName()const {
	return this->mName;
}
// end function GetName

// function that gets code of Branch
int Bank::GetBranchCode()const {
	return this->mBranchCode;
}
// end function GetBranchCode

// function that gets account of Bank
 Account* Bank::GetAccount()const {
	return this->mAccount;
}
// end function GetAccount

// function that gets the Bank
const Bank& Bank::GetBank()const {
	return *this;
}
// end function GetBank
