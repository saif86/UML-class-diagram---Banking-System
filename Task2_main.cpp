#include"SavingsAccount.h" 
#include "CurrentAccount.h" 
#include "Bank.h" 

void main() { 
	CurrentAccount sAccount1; 
	sAccount1.Deposit((float)23.45); 
	sAccount1.GetBalance(); 
	sAccount1.Withdraw((float)102.8); 
	
	Bank b1("UBL", 0360, &sAccount1); 
	b1.ShowBalance(); 
	
	system("Pause"); 
}