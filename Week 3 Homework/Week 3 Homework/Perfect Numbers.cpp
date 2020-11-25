#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::accumulate;

void isPerfect(int n)
{
	

	for (int a = 1; a <= n; a++) //Cycle through the numbers 1 to n;
	{

		vector <int> factors{}; //Create a vector

		for (int c = 1; c <= a / 2; c++) //Cycle through the factors
		{
			int b = a % c; // Set b equal to the remainder of c divided by a

			if (b == 0) // If b is equal to zero, add the divisor to the vector
			{
				factors.push_back(c); //Add the factor to the vector
			}
		}

		int sum_of_factors = accumulate(factors.begin(), factors.end(), 0); //Sum of the factors

		if (sum_of_factors == a) // Check if the sum of the factors is equal to the original number
		{
			cout << a << " is a perfect number. It's factors are: \n";
			for (int y : factors) // This sets y to each element in the factors vector and outputs that number
				cout << y << " ";
			cout << endl;
		}
	}
}

int main()
{
	//Declare Variable
	int num;

	//Get user input
	cout << "Perfect Number Test \n \n";
	cout << "Enter a number. I will tell you how many numbers, between 1 and the number you enter, are perfect \n";
	cin >> num;
	cout << endl;

	//Call function
	isPerfect(num);

	return 0;
}