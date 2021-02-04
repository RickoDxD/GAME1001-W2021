// A simple C++ program
#include <iostream>
using namespace std;   // Use the standard namespace

// Main entry point to the application
int main()
{
	double first = 51,
		second = 5,
		third = 20.125,
		fourth = -10.4;
	
	cout << "Addition: " << first + second << endl;

	cout << "Subtraction: " << second - third << endl;

	cout << "Multiplication: " << third * fourth << endl;

	cout << "Division: " << fourth / first << endl;

    cout << "Modulus: " << (int)first % (int)second << endl; 


	return 0;
}