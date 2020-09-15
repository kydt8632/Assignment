# Array operations

## Access rules for information
* Implement the construction for `MyVector` class which shall manage heap allocated memory with the following properties:

    * When the constructor takes **one** argument, creates a random array with `size` elements, use the function `randInt()` to get the random number.
    * When the constructor takes **two** arguments, creates a random array with `size` elements, and all elements are initalized with `initialValue`.
    * When the constructor takes **three** arguments, creates a random array with size elements, and the elements increase from `initalValue` by `spacing`.

    ~~~ cpp
    MyVector v1(5);             // [2 8 5 1 10 ]
	MyVector v2(5, 1);          // [1 1 1 1 1 ]
	MyVector v3(5, 1, 2);       // [1 3 5 7 9 ]
    ~~~

* Implement the copy constructor, assigment operator and destructor to that frees the memory when `MyVector` is deleted.
* Implement the `operator[]` to safely access the elements, and `getSize` to return the size, make sure you cannot modify the elements of the array from these calls

## Controlled access from non-derived classes

* In the class `MyVectorOperations` implement a `print()` method that prints all elements of a `MyVector` object. It should take an argument to choose the base for printing (`BINARY`, `DECIMAL` , `HEXADECIMAL`), in case of no argument should it should be displayed in decimal base.

~~~cpp
	MyVector v(5, 1, 5);                               // [1 6 11 16 21 ]
	MyVectorOperations::print(v);                      // [1 6 11 16 21 ]
	MyVectorOperations::print(v, Base::DECIMAL);       // [1 6 11 16 21 ]
	MyVectorOperations::print(v, Base::BINARY);        // [00000001 00000110 00001011 00010000 00010101 ]
	MyVectorOperations::print(v, Base::HEXADECIMAL);   // [1 6 b 10 15 ]
~~~

* Implement an add method that takes three arguments, the first two input arguments shall be references to constant `MyVector` objects, the third argument is a reference to a non constant `MyVector` object. The two input vectors shall be added together and the result shall be stored in the output
argument. Make sure all vectors have the same size, otherwise don't do the operation and print an error.

* These operations shall now be implemented in a way that they do not need an instance of `MyVectorOperations`. Further, you are not allowed to change properties of your variables in `MyVector` and you are not allowed to add new methods to class `MyVector`.

## Misc.
* No additional libraries are required.
* Git is good
* Feel free to use any IDE and compiler