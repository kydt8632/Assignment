#include "Vectors.h"

#include <bitset>
#include <cstdlib>
#include <iostream>

int randInt() { return (rand() % 10 + 1); }

// TODO: Implement constructors
// Function of arrays creation
MyVector::MyVector(int size) {
	// Assign member variable as m_size
	m_size = size;
	// Array declaration
	int array[size];
	// Create an array by randInt() with for loop function
	for(int i=0; i<size; i++){
    	array[i] = randInt();     
	}
	// Assign array as m_data
	m_data = array;
}

MyVector::MyVector(int size, int initialValue) {
	m_size = size;
	int array[size];
	// Create an array with initialValue 
	for(int i=0; i<size; i++){
    	array[i] = initialValue;     
	}
	m_data = array;
}

MyVector::MyVector(int size, int initialValue, int spacing) {
	m_size = size;
	int array[size];
	// Create the element by i*spacing from initialValue
	for(int i=0; i<size; i++){
    	array[i] = initialValue + i*spacing;     
	}
	m_data = array;
}

// TODO: Implement the copy constructor, assignment operator and destructor
// Function of copy constructor
MyVector::MyVector(MyVector &v){
	// Assign the member value for a new object as a copy
	m_size = v.m_size;
	m_data = v.m_data;
}
// Function of assignment operator
MyVector::MyVector& operator= (const MyVector& v){
    m_size = v.m_size;
	m_data = v.m_data;
    return *this;
}
// Segmentation fault:11 in test constructor

// ///////////////
// DEFINITIONS
// ///////////////

// TODO: Access member variables safely, make sure these methods do not change
// the member vars.
// Implement the member method
int MyVector::operator[](int index) { return m_data[index]; }
int MyVector::getSize() { return m_size; }
// Reassign private member variable by setArray
void MyVector::setArray(int array[]){
	*this.m_data = array[];
}

// TODO: Implement addition between two vectors, you will need to add something
// in `MyVector` class in orther to modify the elements in the output
void MyVectorOperations::add(const MyVector& a, const MyVector& b, MyVector& c) {
	// Check if all vectors have the same size
	if (a.getSize() == b.getSize() == c.getSize()){
		// Create a new array by adding each array number
		int array[a.getSize()];
		for(int i=0; i<a.getSize(); i++){
			array[i] = a.operator[](i)+b.operator[](i);
		}
		// Reassign the added array to Vector c
		c.setArray(array);
	}
	else{ 
		std::cout << "Error. Arrays with different size";
	}
}
// TODO: Print the vector in every case
void MyVectorOperations::print(const MyVector& a, Base base) {
	switch (base) {
		case Base::BINARY:
		// Access the array num by binary form
				for(int i=0; i<a.getSize(); i++){
					std::cout<<std::bitset<8>(a.operator[](i));
				}
			break;

		case Base::DECIMAL:
		// Access the array num by decimal form
				for(int i=0; i<a.getSize(); i++){
					std::cout<<std::dec << a.operator[](i);
				}
			break;

		case Base::HEXADECIMAL:
		// Access the array num by hexadecimal form
			for(int i=0; i<a.getSize(); i++){
					std::cout<<std::hex << a.operator[](i);

			break;
	}
}
