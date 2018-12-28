#include "CurrentAccount.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// CurrentAccount Default + Overloaded Constructor
CurrentAccount::CurrentAccount(int aAccountID, float aValue) : Account(aAccountID, aValue) { 
	// base class initilzation using member initlizer list
}
// end CurrentAccount constructor


//============================= OPERATIONS ===================================

// Overriding function that withdraws amount from CurrentAccount.
void CurrentAccount::Withdraw(float aAmount) {
	cout << "Current account." << endl;
	Account::Withdraw(aAmount);
}
// end function Withdraw

