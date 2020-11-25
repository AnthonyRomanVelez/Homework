#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void isPerfect(int number)
{
	int j = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			j = j + i;
		}
	}
	if (number == j)
	{
		cout << "\nThe perfect number is: " << number << endl; cout << "The divisors are: " << endl;
		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				cout << i << ",";
			
			}
		}
	}

}

int main()
{
	for (int number = 1; number <= 1000; number++)
	{
		isPerfect(number);
	}
	return 0;
}
