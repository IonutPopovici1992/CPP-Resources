#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;

	system("pause");
	return 0;
}