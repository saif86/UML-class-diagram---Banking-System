/**  CurrentAccount class inherited from Account class.
*
* #include "CurrentAccount.h" <BR>
* -llib
*
*/
#ifndef CURRENT_ACCOUNT_H
#define CURRENT_ACCOUNT_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Account.h"

// CurrentAccount  class definition
class CurrentAccount : public Account{
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	CurrentAccount(int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// CurrentAccount(const CurrentAccount&);
	// CurrentAccount& operator=(const CurrentAccount&);
	// ~CurrentAccount();

// OPERATIONS
	/** Overriding function that withdraws amount from CurrentAccount.
	*
	* @param aAmount The amount to be withdrawn.
	*
	* @return void
	*/
	void Withdraw(float aAmount = 0);
};
// end class CurrentAccount
#endif  
// _CURRENT_ACCOUNT_H_
