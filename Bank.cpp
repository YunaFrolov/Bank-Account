// Gal Aharon , Yuna Frolov

#include <iostream>
#include "BankAccount.h"
#include "LimitedBankAccount.h"
#include "OverDraftAccount.h"

using namespace std;

int main(){

	BankAccount Account1("Gal");	// this account can't get under 0.
	Account1.deposit(200);
	Account1.print();
	Account1.withdraw(300);

    LimitedBankAccount Account2("Dani", 500);   // this account can't get under 0
	Account2.deposit(1000);						// and have deposit limit.
	Account2.print();
	Account2.withdraw(600);

	OverDraftAccount Account3("Yosi", 1000);     // this account can get under 0
	Account3.deposit(500);						 // but have overdraft limit.
	Account3.print();
	Account3.withdraw(1600);
}
