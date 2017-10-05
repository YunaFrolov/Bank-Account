// Gal Aharon , Yuna Frolov
#include <iostream>
#include <string>

#include "BankAccount.h"

using namespace std;

#ifndef LIMITEDBANKACCOUNT_H
#define LIMITEDBANKACCOUNT_H

class LimitedBankAccount : public BankAccount {

private:
	double limit;

public:
	LimitedBankAccount(string name, double limit);
	void setLimit(double limit);
	double getLimit();
	bool withdraw(double money);
};
#endif

