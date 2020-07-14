#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	// int var = 8;
	// void* pointer = 0;
	// void* pointer = NULL;
	// void* pointer = nullptr;
	// void* pointer = &var;
	// int* pointer = &var;
	// *pointer = 10;
	// LOG(var);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** pointer = &buffer;

	LOG(pointer);

	delete[] buffer;

	std::cin.get();
}
