#include "Account.h" 

class SavingsAccount :public Account { 
public: 
	SavingsAccount(float =0.0, int =0); 
	void Withdraw(float); 
};