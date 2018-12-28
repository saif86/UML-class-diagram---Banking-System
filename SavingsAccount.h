/**  SavingsAccount class inherited from Account class.
*
* #include "SavingsAccount.h" <BR>
* -llib
*
*/
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Account.h"

// SavingsAccount class definition
class SavingsAccount : public Account {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	SavingsAccount(int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// SavingsAccount(const SavingsAccount&);
	// SavingsAccount& operator=(const SavingsAccount&);
	// ~SavingsAccount();

// OPERATIONS
	/** Overriding function that withdraws amount from SavingsAccount.
	*
	* @param aAmount The amount to be withdrawn.
	*
	* @return void
	*/
	void Withdraw(float aAmount = 0);
};
// end class SavingsAccount
#endif  
// _SAVINGS_ACCOUNT_H_
