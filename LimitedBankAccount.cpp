// Gal Aharon , Yuna Frolov

#include "LimitedBankAccount.h"
#include <string>

using namespace std;

LimitedBankAccount::LimitedBankAccount(string name, double limit) : BankAccount(name), limit(limit){}

void LimitedBankAccount::setLimit(double limit){
	this->limit = limit;
}

double LimitedBankAccount::getLimit(){
	return limit;
}

bool LimitedBankAccount::withdraw(double money){
	if (balance >= money && limit >= money){
		balance -= money;
		cout << "Succseed, Thank you.\n" << endl;
		return true;
	}
	else{
		cout << "You try to withdrow " << money <<  " but your account is limit to withdraw " << getLimit() << "\n" << endl;
		return false;
	}
}
