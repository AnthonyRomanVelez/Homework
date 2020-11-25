#include <iostream>
using namespace std;
//My first time using GibHub!
//Create function named square of asterisks
void square_of_asterisks(unsigned n)
{
	for (size_t row = 0; row < n; row++)
	{
		for (size_t col = 0; col < n; col++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main() //It took me a while to figure how to use GibHub but I think I'm getting there.
{
	unsigned n = 0;
	cout << "Enter number: ";//Modifying the brand that I created from Master.
	cin >> n;

	square_of_asterisks(n);
	ABCD
	return 0;
}