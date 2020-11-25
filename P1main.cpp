#include <iostream>
using namespace std;

	int main()
	{
		//Convert celcius to fahrenheit and vice versa
		double F, C;
		cout << "Enter temperature in celcius: ";
		cin >> C;
		//Formula
		F = (32 + (C * 9.0 / 5.0));
		cout << "Temperature in fahrenheit is: " << F << endl;
		cout << "\n========================================================\n" << endl;

		cout << "Enter temperature in fahrenheit: ";
		cin >> F;
		//Formula
		C = (5.0 / 9.0) * (F - 32);
		cout << "Temperature in celcius is: " << C << endl;
		
		return 0;
	}

