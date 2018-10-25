#ifndef Account_HEADER
#define Account_HEADER 

#include <iostream> 

using namespace std; 

class Account { 
	int AccountID; 
	float value;
public: 
	Account(float, int); 
	void Deposit(float); 
	void Withdraw(float); 
	void GetBalance(); 
}; 

#endif