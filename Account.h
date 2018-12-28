/**  Account class in a C++ code.
*
* #include "Account.h" <BR>
* -llib
*
*/
#ifndef ACCOUNT_H
#define ACCOUNT_H

// SYSTEM INCLUDES
#include<iostream>


// Account class definition
class Account {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Account(int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Account(const Account&);
	// Account& operator=(const Account&);
	// ~Account();

// OPERATIONS
	/** function that deposits amount.
	*
	* @param aAmount The amount to be deposited.
	*
	* @return void
	*/
	void Deposit(float aAmount = 0.0);

	/** function that withdraws amount.
	*
	* @param aAmount The amount to be withdrawn.
	*
	* @return void
	*/
	void Withdraw(float aAmount = 0);

	/** function that prints balance.
	*
	* @param void
	*
	* @return void
	*/
	void PrintBalance()const;

// ACCESS
	// setters
	void SetAccountID(int = 0);
	void SetValue(float = 0.0);
	void SetAccount(int = 0, float = 0.0);
	/**
	# @overload void SetAccount(const Account&);
	*/
	void SetAccount(const Account&);
	
	// getters
	int GetAccountID()const;
	float GetValue()const;
	const Account& GetAccount()const;

private:
// DATA MEMBERS
	int mAccountID;
	float mValue;
};
// end class Account
#endif  
// _ACCOUNT_H_
