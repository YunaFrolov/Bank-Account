// Gal Aharon , Yuna Frolov

#include "OverDraftAccount.h"

OverDraftAccount::OverDraftAccount(string name, double max) : BankAccount(name), maxOverDraft(max){}

double OverDraftAccount::getMax(){
	return maxOverDraft;
}

bool OverDraftAccount::withdraw(double money){
	if (balance + maxOverDraft >= money){
		balance -= money;
		cout << "Succseed, Thank you.\n" << endl;
		return true;
	}
	else{
		cout << "You try to withdrow " << money << " but your over draft is limit to " << getMax() << "\n" << endl;
		return false;
	}

}