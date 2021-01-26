#include <lib/Vectors.h>
#include <lib/Vectors.h>



int main(int argc, char** argv) {

	// TODO : Implement the constructors for my vector
	{
		MyVector v1(5);       //[2 8 5 1 10] (Random)
		MyVector v2(5, 1);    //[1 1 1 1 1]
		MyVector v3(5, 1, 2); //[1 3 5 7 9]
	}

	// TODO : Implement the copy constructor and assignment operator
	{
		MyVector v(5, 1, 2); //[1 3 5 7 9]
		const auto a = v;    //[1 3 5 7 9]
		const MyVector b(v); //[1 3 5 7 9]
	}

	// TODO : Implement the print method in my vector operations
	//
	{
		MyVector v(5, 1, 5);
		// MyVectorOperations::print(v);                      // [1 6 11 16 21 ]
		MyVectorOperations::print(v, Base::DECIMAL); // [1 6 11 16 21 ]
		MyVectorOperations::print(v, Base::BINARY); // [00000001 00000110 00001011 00010000 00010101 ]
		MyVectorOperations::print(v, Base::HEXADECIMAL); // [1 6 b 10 15 ]
	}

	// TODO : Implement the add method, make sure all MyVectors have the same size
	{
		MyVector v1(5, 0, 10);
		MyVector v2(5, 1, 5);
		MyVector v3(5, 0, 0);
		MyVectorOperations::add(v1, v2, v3);
		MyVectorOperations::print(v3, Base::DECIMAL); // [1 16 31 46 61 ]
	}
}
