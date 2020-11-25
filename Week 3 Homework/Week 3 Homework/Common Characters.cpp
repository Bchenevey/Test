#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

void CommonCharacters(array<int, 10> array1, array<int, 10> array2)
{
	for (int a = 0; a < array1.size(); a++)
	{
		for (int b = 0; b < array2.size(); b++)
		{
			if (array1.at(a) == array2.at(b))
			{
				cout << " " << array1.at(a);
			}
		}
	}
}

int main()
{
	//Define arrays
	array <int, 10> first;
	array <int, 10> second;

	//User input + building arrays
	cout << "Common Elements\n\n";
	cout << "Enter your first list of ten integers, one at a time.\n";
	for (int a = 0; a < first.size(); a++)
	{
		cin >> first.at(a);
	}
	cout << "Enter your second list of ten integers, one at a time.\n";
	for (int a = 0; a < second.size(); a++)
	{
		cin >> second.at(a);
	}

	//Call function
	cout << "The common elements are: ";
	CommonCharacters(first, second);


}