#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;

void squareofAsterisks (int side_length) 
{
	for (int i = 0; i < side_length; i++) //Create a counter for each line
		
	{
		for (int j = 0; j < side_length; j++)//Describe what to do on each line
		{
			cout << left << setw(2) << "*";//Make it an actual square!
		}

		cout << endl; //Line break at the end of each line
	}
}

int main()
{
	//Declare variables
	int n = 0;

	//User input
	cout << "A Square of Asterisks \n \n";
	cout << "Enter your desired side length: " << endl;
	cin >> n;
	cout << endl;

	//Call Function
	squareofAsterisks(n);

	return 0;
}