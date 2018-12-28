/**
* @file Task2_main.cpp
*
* @brief This code implements Banking system.
* Current & Savings Account are inherited from Account class.
* Bank has aggregation with Account class.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;
#include "Bank.h" 
#include "CurrentAccount.h"
#include "SavingsAccount.h"
using namespace std;

// function main begins program execution
void main()
{
	CurrentAccount sAccount1;
	sAccount1.Deposit(23.45);
	sAccount1.PrintBalance();
	sAccount1.Withdraw(102.8);

	Bank b1("UBL", 360, &sAccount1);
	b1.ShowBalance();

	system("pause");
}
// end main
