#include "Account.h" 

class CurrentAccount :public Account { 
public: 
	CurrentAccount(float=0.0, int=0); 
	void Withdraw(float); 
};