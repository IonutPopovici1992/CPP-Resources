#include <iostream>

using namespace std;

int main() {

	int numberOfCats = 5;
	int numberOfDogs = 7;
	int numberOfAnimals = numberOfCats + numberOfDogs;

	cout << "Number of cats: " << numberOfCats << endl;
	cout << "Number of dogs: " << numberOfDogs << endl;

	cout << "Total number of animals: " << numberOfAnimals << endl;
	
	cout << "New dog acquired!!!" << endl;

	numberOfDogs += 1;
	// numberOfDogs = numberOfDogs + 1;
	
	cout << "New number of dogs: " << numberOfDogs << endl;

	system("pause");
	return 0;
}
