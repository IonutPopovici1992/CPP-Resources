#include <iostream>

int main()
{
	/*
		1 byte signed -> -128 to 127
		2 byte signed -> -32,768 to 32,767
		4 byte signed -> -2,147,483,648 to 2,147,483,647
		8 byte signed -> -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
	*/

	/*
		1 byte unsigned -> 0 to 255
		2 byte unsigned -> 0 to 65,535
		4 byte unsigned -> 0 to 4,294,967,295
		8 byte unsigned -> 0 to 18,446,744,073,709,551,615
	*/

	/*
		char, short, int, long, long int, long long
	*/

	char charVariable; // 1 byte
	short shortVariable; // 2 bytes
	int intVariable; // 4 bytes
	long longVariable; // 4 bytes

	/*
		int variable = 10; // 4 bytes; -2,147,483,648 to 2,147,483,647
		// Technically the max value would be 2,147,483,647
		// because we also need to be able to store 0
	*/

	/*
		unsigned int variable = 10; // 4 bytes; 0 to 4,294,967,295
	*/

	// char a = 'A';
	// char a = 65;

	float floatVariable = 5.5f; // 4 bytes
	double doubleVariable = 5.5; // 8 bytes

	bool boolVariable = true; // 1 byte

	// sizeof()
	std::cout << sizeof(bool) << std::endl;

	// pointers
	bool* boolVariable2;

	// references
	bool& boolVariable3;

	std::cout << boolVariable2 << std::endl;
	std::cin.get();
}
