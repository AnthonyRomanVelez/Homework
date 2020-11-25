#include <iostream>
#include <string>
using namespace std;

int main()
{
	int listnum1[10];
	int listnum2[10];

	cout << "Enter list # 1:\n";
	for (int i = 0; i < 10; i++)
		cin >> listnum1[i];

	cout << "\nEnter list #2:\n";
	for (int i = 0; i < 10; i++)
		cin >> listnum2[i];
	cout << "\nThe common elements are:\n";
	
	for (unsigned outer = 0; outer < 10; outer++)
	{
		int out = listnum1[outer];
		for (unsigned inner = 0; inner < 10; inner++)
		{
			if (out == listnum2[inner])
				cout << out << endl;
		}
	}
	return 0;
}