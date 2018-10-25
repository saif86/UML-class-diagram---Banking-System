#include"Bank.h" 

Bank::Bank(char* aName, int abranchCode, Account* anAccount) :Name(aName), branchCode(abranchCode), a1(anAccount) {
	
	if (aName != NULL) { 
		int len = strlen(aName) + 1; 
		Name = new char[len]; 
		strcpy_s(Name, len, aName); 
	} 
	else { 
		Name = new char; 
		strcpy_s(Name, 1, "\0"); 
	} 
} 

void Bank::ShowBalance() { 
	cout << "Bank: " << Name << endl;
	cout << "Branch Code: " << branchCode << endl;
	a1->GetBalance(); 
}