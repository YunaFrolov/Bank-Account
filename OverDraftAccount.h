// Gal Aharon , Yuna Frolov

#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

#ifndef OVERDRAFTACCOUNT_H
#define OVERDRAFTACCOUNT_H

class OverDraftAccount : public BankAccount {

private:
	double maxOverDraft;

public:
	OverDraftAccount(string name, double max);
	double getMax();
	bool withdraw(double money);
};

#endif