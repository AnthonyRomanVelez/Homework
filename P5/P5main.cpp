#include <iostream>
using namespace std;

//Write your function below
bool isConsecutiveFour(const int values[], int size)
{
	for (size_t i = 0; i < size - 3; i++)	
	
	{
		bool equal = true;
		for (int j = i; j < i + 3; j++)
		{
			if (values[j] != values[j + 1])
			{
				equal = false;
				break;
			}
		}
		if (equal)
			return true;
	}
}
int main()
{
	const int MaxSize = 80;
	cout << "Enter the number of values: ";
	int size;
	cin >> size;

	int values[MaxSize]{};

	cout << "\nEnter the values: " << endl;
	for (int i = 0; i < size; i++)
		cin >> values[i];

	if (isConsecutiveFour(values, size))
	{
		cout << "\nThe list has consecutive numbers: " << endl;
	}
	else
	{
		cout << "\nThe list has no consecutive numbers: " << endl;
	
	}
	return 0;
}