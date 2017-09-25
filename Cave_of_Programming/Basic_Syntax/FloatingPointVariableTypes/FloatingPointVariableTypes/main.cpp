#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 123.456789;
	cout << "Sizeof float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << "Sizeof double: " << sizeof(double) << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.456789456789;
	cout << "Sizeof long double: " << sizeof(long double) << endl;
	cout << setprecision(20) << fixed << lValue << endl;

	system("pause");
	return 0;
}
