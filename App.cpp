// Gal Aharon , Yuna Frolov

#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
	//creating default size for vector arrays
	const int SIZE = 5;
	cout << "Default size is: " << SIZE << endl;
	//creating first vector
	Vector<int> firstVector(SIZE);
	//reseting it with index
	for (int nIndex = 0; nIndex < SIZE; nIndex++)
		firstVector.setStorage(nIndex, nIndex);

	cout << "The first vector is: " << firstVector << endl;
	//check - operator
	firstVector = -firstVector;
	cout << "The first vector after operator - is: " << firstVector << endl;

	//creating second vector
	Vector<int> secondVector(SIZE);
	for (int nIndex = 0; nIndex < SIZE; nIndex++)
		secondVector.setStorage(nIndex, nIndex);

	cout << "The second vector is: " << secondVector << endl;
	//check + operator
	secondVector = secondVector + firstVector;
	cout << "The second vector after operator + with first is: " << secondVector << endl;

	bool areEqual;
	if (secondVector == firstVector){
		areEqual = true;
	}
	else
		areEqual = false;

	cout << "Are vectors equal? 0 if not, 1 if yes: " << areEqual << endl;

	bool areNotEqual;
	if (secondVector != firstVector){
		areNotEqual = true;
	}
	else
		areNotEqual = false;

	cout << "Are vectors not equal? 0 if equal, 1 if not equal: " << areNotEqual << endl;

	//check of  [] operator
	cout << "What is in second slot of first vector? " << firstVector[1] << endl;

	return 0;
};