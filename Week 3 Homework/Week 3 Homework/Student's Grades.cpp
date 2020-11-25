#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

int maximumGrade(int number_of_students, array<int, 100> grades)
{
	int maximum = 0;

	for (int a = 0; a < number_of_students; a++)
	{
		if (grades[a] > maximum)
		{
			maximum = grades[a];
		}
	}

	return maximum;
}

int main()
{
	//Declare Variables
	int number_of_students = 0;
	int numerical_grade = 0;
	int maximum = 0;
	array<int, 100> arrayGrades = { 0 };

	//Gather input of number of students
	cout << "Grade Calculator: \n \n";
	cout << "Enter the number of students (must be less than 100): \n";
	cin >> number_of_students;
	if (number_of_students > 100)
	{
		cout << "Number of students must be less than 100. Please re-enter the number of the students: \n";
		cin >> number_of_students;
	}

	//Gather input of those students grades
	cout << "You will now enter the grades of each student. Press Enter after each submission. \n";

	for (int a = 0; a < number_of_students; a++)
	{
		cin >> numerical_grade;
		arrayGrades[a] = numerical_grade;
	}

	//Call function
	maximum = maximumGrade(number_of_students, arrayGrades);

	cout << "Maximum value is " << maximum << "\n \n \n ";
	
	cout << endl;

	//Output
	for (int a = 0; a < number_of_students; a++)
	{
		if (arrayGrades[a] >= maximum - 10)
			cout << "Student " << a + 1 << " received a score of " << arrayGrades[a] << ", which is an A. \n \n";
		else if (arrayGrades[a] >= maximum - 20)
			cout << "Student " << a + 1 << " received a score of " << arrayGrades[a] << ", which is a B. \n \n";
		else if (arrayGrades[a] >= maximum - 30)
			cout << "Student " << a + 1 << " received a score of " << arrayGrades[a] << ", which is a C. \n \n";
		else if (arrayGrades[a] >= maximum - 40)
			cout << "Student " << a + 1 << " received a score of " << arrayGrades[a] << ", which is a D. \n \n";
		else
			cout << "Student " << a + 1 << " received a score of " << arrayGrades[a] << ", which is an F. \n \n";
	}

	return 0;

}
