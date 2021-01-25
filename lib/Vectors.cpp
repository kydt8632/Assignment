#include "Vectors.h"

#include <bitset>
#include <cstdlib>
#include <iostream>

int randInt() { return (rand() % 10 + 1); }

// TODO: Implement constructors
MyVector::MyVector(int size) {
	m_size = size;
	int array[size];
	for(int i=0; i<size; i++){
    	array[i] = randInt();     
	}
	m_data = array;
}

MyVector::MyVector(int size, int initialValue) {
	m_size = size;
	int array[size];
	for(int i=0; i<size; i++){
    	array[i] = initialValue;     
	}
	m_data = array;
}

MyVector::MyVector(int size, int initialValue, int spacing) {
	m_size = size;
	int array[size];
	for(int i=0; i<size; i++){
    	array[i] = initialValue + i*spacing;     
	}
	m_data = array;
}

// TODO: Implement the copy constructor, assignment operator and destructor
// ///////////////
// DEFINITIONS
// ///////////////

// TODO: Access member variables safely, make sure these methods do not change
// the member vars.
int MyVector::operator[](int index) { return 0; }
int MyVector::getSize() { return 0; }

// TODO: Implement addition between two vectors, you will need to add something
// in `MyVector` class in orther to modify the elements in the output
void MyVectorOperations::add(const MyVector& a, const MyVector& b,
	MyVector& c) {}

// TODO: Print the vector in every case
void MyVectorOperations::print(const MyVector& a, Base base) {
	switch (base) {
	case Base::BINARY:

		break;

	case Base::DECIMAL:

		break;

	case Base::HEXADECIMAL:

		break;
	}
}
