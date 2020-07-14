#include <iostream>

#define LOG(x) std::cout << x << std::endl

// Pointers

/*
void Increment(int* value)
{
	(*value)++;
}
*/

// References

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;

	// int& reference = a;
	// reference = b;
	// a = 8, b = 8

	int* reference = &a;
	*reference = 2;
	reference = &b;
	*reference = 1;

	// Increment(a);
	// int& reference = a;
	// reference = 2;
	LOG(a);
	LOG(b);

	std::cin.get();
}
