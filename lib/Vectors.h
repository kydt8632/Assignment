enum class Base { BINARY, DECIMAL, HEXADECIMAL };


// Please avoid using std::vector in this implementation

class MyVector
{
public:
	// TODO: Implement constructors
	MyVector(int size);
	MyVector(int size, int initialValue);
	MyVector(int size, int initialValue, int spacing);
	// TODO: Implement the copy constructor, assignment operator and destructor
	MyVector(const MyVector &v){
		m_size = v.m_size
		m_data = v.m_data
	};

	
	// ///////////////
	// DECLARATIONS
	// ///////////////

	// TODO: Access member variables safely
	int operator[](int index);
	int getSize();

private:
	int* m_data = 0; // TODO: This does not belong here
	int m_size = 0;      // TODO:  This belongs here
};

class MyVectorOperations
{
	// TODO: Adjust this, according to the README
public:
	static void add(const MyVector& a, const MyVector& b, MyVector& c);

	static void print(const MyVector& a, Base base);
};
