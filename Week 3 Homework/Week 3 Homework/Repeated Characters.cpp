#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

bool IsConsecutiveFour(int num, vector <int> check)
{
	for (int a = 0; a < num - 3; a++)
	{
		bool isEqual = true;
		for (int b = 0; b < a + 3; b++)
		{
			if (check.at(b) != check.at(b+1))
			{
				return false;
				break;
			}
		}
		
		if (isEqual)
		{
			return true;
		}
	}
}

void ExtraCredit(vector <int> points)
{
	vector <int> which_ones;

	for (int a = 0; a < points.size() - 3; a++)
	{
		if (points.at(a) == points.at(a+1) && points.at(a+2) == points.at(a+3) && points.at(a) == points.at(a+3))
			{
				which_ones.push_back(points.at(a));
			}
	}

	cout << "They are: ";

	for (int c = 0; c < which_ones.size(); c++)
	{
		cout << which_ones.at(c) << " ";
	}
}

	
int main()
{
	//Declare Variables
	
	int numbers = 0;
	vector <int> consecutives{ numbers };

	//User Input
	cout << "Pattern Recognition : Four Consecutive Numbers \n \n";
	cout << "How many numbers would you like to enter? You cannot enter more than 80 numbers. \n";
	cin >> numbers;
	if (numbers < 0 || numbers > 80)
	{
		cout << "Must be greater than zero and less than, or equal to, 80. \n";
		cin >> numbers;
	}
	
	cout << endl;
	cout << "Enter your list of numbers. Press Enter after each submission. \n";

	//Set up vector
	for (int a = 0; a < numbers; a++)
		{
			int x;
			cin >> x;
			consecutives.push_back(x);
		}

	if (IsConsecutiveFour(numbers, consecutives))
	{
		cout << "There are consecutive fours. ";
		ExtraCredit(consecutives);
	}
	else
		cout << "There are no consecutive fours";
	
	return 0;
}
	
