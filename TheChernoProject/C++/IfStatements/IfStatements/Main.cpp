#include <iostream>

int main()
{
	/*
	int x = 5;
	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		std::cout << "Hello, World!!!" << std::endl;
	}

	std::cin.get();
	*/

	const char* pointer = "Hello";

	if (pointer)
	{
		std::cout << pointer << std::endl;
	}
	else if (pointer == "Hello")
	{
		std::cout << "pointer is Hello!" << std::endl;
	}
	else
	{
		std::cout << "pointer is null!" << std::endl;
	}

	std::cin.get();
}
