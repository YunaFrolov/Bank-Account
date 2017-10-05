// Gal Aharon , Yuna Frolov
#include <iostream>
using namespace std;

#ifndef VECTOR_H
#define VECTOR_H


template<class T>
class Vector{

private:
	T *storage;
	int size;

public:
	//default c-tor
	Vector(int size) {
		this->size = size;
		storage = new T[size];
	}
	//copy c-tor
	Vector(const Vector<T> &vec) {
		this->size = vec.size;
		storage = new T[size];
		for (int i = 0; i < this->size; i++)
			storage[i]  = vec.storage[i];
	}
	//setter, help function for main
	void setStorage(int nIndex, T newValue);

	Vector<T> operator-();  // unary - operator
	Vector<T> operator+(Vector<T> obj2);  // Overloaded + operator
	bool operator==(Vector<T> obj2);  // Overloaded == operator
	bool operator!=(Vector<T> obj2);  // Overloaded != operator
	template <class T> friend ostream& operator<<(ostream& output, const Vector<T>& obj); // Overloaded << operator
	T operator[] (int i) { return this->storage[i]; } //Overloaded [] operator
	};

#endif

//new value to storage
template<class T>
void Vector<T>::setStorage(int nIndex, T newValue){
	storage[nIndex] = newValue;
}

template<class T>
Vector<T> Vector<T>::operator-(){
	//inverse of original
	for (int i = 0; i < this->size; i++)
		this->storage[i] = -this->storage[i];

	return *this;
}

template<class T>
Vector<T> Vector<T>::operator+(Vector<T> obj2)
{
	//for the bigger size
	int newSize = 0;
	int smallSize = 0;
	if (this->size > obj2.size){
		newSize = this->size;
		smallSize = obj2.size;
	}
	else{
		newSize = obj2.size;
		smallSize = this->size;
	}
	Vector<T> temp(newSize);
	//add all up to smallest
	for (int i = 0; i < smallSize; i++)
		temp.storage[i] = this->storage[i] + obj2.storage[i];

	//add rest as it is in bigger
	if (this->size > obj2.size){
		for (int j = smallSize; j < newSize; j++)
			temp.storage[j] = this->storage[j];
	}else
		for (int j = smallSize; j < newSize; j++)
			temp.storage[j] = obj2.storage[j];

	return temp;
}

template<class T>
bool Vector<T>::operator==(Vector<T> obj2){
	//if not same size, not equal
	if (this->size != obj2.size)
		return false;
	else
		//if not all elements equal, 0
		for (int i = 0; i < this->size; i++)
			if (this->storage[i] != obj2.storage[i])
				return false;
	//if all are equal, 1
	return true;
}

template<class T>
bool Vector<T>::operator != (Vector<T> obj2){
	//if size not equal, true
	if (this->size != obj2.size)
		return true;
	else
		for (int i = 0; i < this->size; i++)
			if (this->storage[i] != obj2.storage[i])
				return true;
	//if all equal, false
	return false;
}

template<class T>
ostream& operator<<(ostream& output, const Vector<T>& obj)
{
	output << "(";
	for (int i = 0; i < obj.size - 1; i++)
		output << obj.storage[i] << ",";

	output << obj.storage[obj.size - 1] << ")";
	return output;

}