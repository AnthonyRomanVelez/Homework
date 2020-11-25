#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Students in 12th grade and their scores
	const int twelveGRADE = 100;
	int scores[twelveGRADE];
	int best = 0;

	int scorings;
	cout << "Total amount of 12th grade honor students: " << endl;
	cin >> scorings;

	cout << "\nEntering " << scorings << " scores: \n" << endl;
	//The Best score
	for (int i = 0; i < scorings; i++)
	{
		cin >> scores[i];
		if (scores[i] > best)
			best = scores[i];
	}
	//The Best grade
	char grade;
	for (int i = 0; i < scorings; i++)
	{
		if (scores[i] >= best - 10)
		{
			grade = 'A';
		}
		else if (scores[i] >= best - 20)
		    grade = 'B';
		else if (scores[i] >= best - 30)
		    grade = 'C';
		else if (scores[i] >= best - 40)
		    grade = 'D';
		else 
		grade = 'F';

		cout << "\nStudent # " << i + 1 << " grade is: " << grade << endl;

	}

	return 0;
}