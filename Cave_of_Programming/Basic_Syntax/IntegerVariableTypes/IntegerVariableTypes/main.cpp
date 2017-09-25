#include <iostream>
#include <limits>

using namespace std;

int main() {

	int value = -54656;
	cout << value << endl;

	cout << "Max int value: " << INT32_MAX << endl;
	cout << "Min int value: " << INT32_MIN << endl;

	long int lValue = 123456789;
	cout << lValue << endl;

	short int sValue = 123;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short: " << sizeof(short int) << endl;

	unsigned int uValue = 12345;
	cout << uValue << endl;

	system("pause");
	return 0;
}
