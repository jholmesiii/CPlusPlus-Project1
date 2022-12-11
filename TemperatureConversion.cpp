// TemperatureConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
	// declaration section
	double toConvert, converted;
	char selection, lowerSelection;

	// input section
	cout << "Would you like to convert to Fahrenheit or Celsius?\n";
	cout << "Press F to convert to Fahrenheit, or C to convert to Celsius.\n";
	cin >> selection;

	lowerSelection = tolower(selection);

	//Checks
	if (lowerSelection != 'f' && lowerSelection != 'c') {
		do {
			cout << "Bad input. Please use F for Fahrenheit, or C for Celius\n";
			cin >> selection;
			lowerSelection = tolower(selection);
		} while (lowerSelection != 'f' && lowerSelection != 'c');
	}

	cout << "What is the temperature you would like to convert?\n";
	cin >> toConvert;
	
	if (lowerSelection == 'f') {
		converted = (toConvert * 9.0 / 5.0) + 32;
		cout << "The temperature in Fahrenheit is " << converted << endl;
	}
	else {
		converted = 5.0 / 9.0 * (toConvert - 32.0);
		cout << "The temperature in Celsius is " << converted << endl;
	}

	// output section
	
	cout << "Thank you for using my program" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
