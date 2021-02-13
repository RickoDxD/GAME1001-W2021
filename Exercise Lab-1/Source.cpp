// C++ Week2 Lab-2
#include<iostream>
	using namespace std; // Use the standard namespace 

	int main()
	{ 
		// Sizes of 
		cout << "The size of bool " << sizeof(bool) << " bytes\n";
		cout << "The size of char " << sizeof(char) << " bytes\n";
		cout << "The size of short int " << sizeof(short int) << " bytes\n";
		cout << "The size of float " << sizeof(float) << " bytes\n";
		cout << "The size of int " << sizeof(int) << " bytes\n";
		cout << "The size of long int " << sizeof(long int) << " bytes\n";
		cout << "The size of double " << sizeof(double) << " bytes\n";
		cout << "The size of long long int " << sizeof(long long int) << " bytes\n";
		cout << "The size of string " << sizeof(string) << " bytes\n\n\n";
		
		// ADDITION SUBTRACTION MULTIPLICATION DIVISION MODULUS

		    double First = 5.43;
			double Second = 40.9;
			double Third = 60.82;
			double Fourth = 10.5;

			cout << "Addition: " << First + Second << endl;
			cout << "Subtraction: " << Second + Third << endl;
			cout << "Multiplication: " << Third + Fourth << endl;
			cout << "Division: " << Fourth / First << endl;
			cout << "Modulus: " << (int)First % (int)Second << endl;


		return 0;
	}
	