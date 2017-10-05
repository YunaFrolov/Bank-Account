// Gal Aharon , Yuna Frolov

#include "BankAccount.h"

BankAccount::BankAccount(string name){	
	this->name = name; 
	balance = 0;
}

BankAccount::~BankAccount(){
}

string BankAccount::getName(){
	return name;
}

double BankAccount::getBalance(){
	return balance;
}

bool BankAccount::withdraw(double money){
	cout << "You ask to withdrow " << money << " , please wait..." << endl;
	if (getBalance() - money >= 0){
		balance -= money;
		cout << "Succseed, Thank you.\n" << endl;
		return true;
	}
	else{
		cout << "Sorry, but you cannot withdraw " << money << " because you have only " << getBalance() << "\n" << endl;
		return false;
	}
}

void BankAccount::deposit(double money){
	balance += money;
}

void BankAccount::print(){
	cout << "Name: " << getName() << "\nBalance: " << getBalance() << endl;
}