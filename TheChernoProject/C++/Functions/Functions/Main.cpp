#include <iostream>

int Multiply(int a, int b) {
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	MultiplyAndLog(2, 3);
	MultiplyAndLog(5, 8);
	MultiplyAndLog(45, 90);

	std::cin.get();
}
