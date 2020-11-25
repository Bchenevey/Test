#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;

vector <int> consecutives;

bool IsConsecutiveFour(int num, array<int, 80> variables)
{
	for (int a = 0; a < num - 3; a++)
	{
		bool isEqual = true;
		for (int b = 0; b < a + 3; b++)
		{
			if (variables[a] == variables[b])
			{
				consecutives.push_back(variables[a]);
				return false;
				break;
			}
		}
		
		{
			if (isEqual)
			{
				return true;
		    }
		}
	}	
}

int main()
{
	//Declare Variables
	array<int, 80> variables = {};
	int numbers = 0;

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
	
	//Set up array
	for (int a = 0; a < numbers; a++)
	{
		cin >> variables[a];
	}


	if (IsConsecutiveFour(numbers, variables))
	{
		cout << "The list you entered has at least one set of four consecutive, equal numbers.";
		for (int a = 0; a < consecutives.size(); a++)
		{
			cout << " " << consecutives.at(a) << " ";
		}
	}
	else
	{
		cout << "This list has no sets of four consecutive, equal numbers.";
	}

	return 0;
}
