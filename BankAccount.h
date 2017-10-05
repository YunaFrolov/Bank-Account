// Gal Aharon , Yuna Frolov
#include <iostream>
#include <string>

using namespace std;

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount{

protected:
	string name;
	double balance;

public:
	BankAccount(string);
	~BankAccount();
	string getName();
	double getBalance();
	bool withdraw(double);
	void deposit(double);
	void print();
};

#endif
