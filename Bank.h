/**  Bank class in a C++ code.
*
* #include "Bank.h" <BR>
* -llib
*
*/
#ifndef BANK_H
#define BANK_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include"Account.h"


// Bank class definition
class Bank {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Bank(const string& = "", int = 0, Account* = NULL);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Bank(const Bank&);
	// Bank& operator=(const Bank&);
	// ~Bank();

// OPERATIONS
	/** function that shows balance.
	*
	* @param void
	*
	* @return void
	*/
	void ShowBalance()const;

	
// ACCESS
	// setters
	void SetName(const string& = "");
	void SetBranchCode(int = 0);
	void SetAccount(Account* = NULL);
	void SetBank(const string& = "", int = 0, Account* = NULL);
	/**
	# @overload void SetBank(const Bank&);
	*/
	void SetBank(const Bank&);

	// getters
	const string& GetName()const;
	int GetBranchCode()const;
	Account* GetAccount()const;
	const Bank& GetBank()const;

private:
	// DATA MEMBERS
	string mName;
	int mBranchCode;
	Account* mAccount;
};
// end class Bank
#endif  
// _BANK_H_
