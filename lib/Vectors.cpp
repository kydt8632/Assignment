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
MyVector::MyVector(MyVector &v){
	m_size = v.m_size;
	m_data = v.m_data;
}
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
int MyVector::operator[](int index) { return m_data[index]; }
int MyVector::getSize() { return m_size; }
void MyVector::setArray(int array[]){
	*this.m_data = array[];
}

// TODO: Implement addition between two vectors, you will need to add something
// in `MyVector` class in orther to modify the elements in the output
void MyVectorOperations::add(const MyVector& a, const MyVector& b, MyVector& c) {
	if (a.getSize() = b.getSize()){
		int array[a.getSize()];
		for(int i=0; i<a.getSize(); i++){
			array[i] = a.operator[](i)+b.operator[](i);
		}
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
				for(int i=0; i<a.getSize(); i++){
					std::cout<<std::bitset<8>(a.operator[](i));
				}
			break;

		case Base::DECIMAL:
				for(int i=0; i<a.getSize(); i++){
					std::cout<<std::dec << a.operator[](i);
				}
			break;

		case Base::HEXADECIMAL:
			for(int i=0; i<a.getSize(); i++){
					std::cout<<std::hex << a.operator[](i);

			break;
	}
}
