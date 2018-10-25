#include "Account.h" 

class Bank { 
	char* Name;
	int branchCode;
	Account* a1; 
public: 
	Bank(char* = NULL, int = 0, Account* =NULL); 
	void ShowBalance(); 
};