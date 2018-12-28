#include "SavingsAccount.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// SavingsAccount Default + Overloaded Constructor
SavingsAccount::SavingsAccount(int aAccountID, float aValue) : Account(aAccountID, aValue) {
	// base class initilzation using member initlizer list
}
// end SavingsAccount constructor


//============================= OPERATIONS ===================================

// Overriding function that withdraws amount from SavingsAccount.
void SavingsAccount::Withdraw(float aAmount) {
	cout << "Savings account." << endl;
	Account::Withdraw(aAmount);
}
// end function Withdraw

