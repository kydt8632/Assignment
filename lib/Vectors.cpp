#include "Vectors.h"

#include <iostream>
#include <cstdlib>
#include <bitset>

int randInt() { return (rand() % 10 + 1); }

//TODO: Implement constructors
MyVector::MyVector(int size){}
MyVector::MyVector(int size, int initialValue){}
MyVector::MyVector(int size, int initialValue, int spacing){}

// TODO: Implement the copy constructor, assignment operator and destructor
// ///////////////
// DEFINITIONS
// ///////////////

// TODO: Access member variables safely, make sure these methods do not change the member vars.
int MyVector::operator[](int index)
{
    return 0;
}
int MyVector::getSize()
{
    return 0;
}


// TODO: Implement addition between two vectors, you will need to add something in `MyVector` class in orther to modify the elements in the output
void MyVectorOperations::add(const MyVector& a, const MyVector& b, MyVector& c){}

// TODO: Print the vector in every case
void MyVectorOperations::print(const MyVector& a, Base base)
{
    switch (base)
    {
    case Base::BINARY:

        break;

    case Base::DECIMAL:

        break;

    case Base::HEXADECIMAL:

        break;
    }
}
