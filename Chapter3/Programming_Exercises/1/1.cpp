#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_name, last_name;
	char letter_grade;
	int age;
	cout << "What is your first name? ";
	getline(cin, first_name);
	cout << endl << "What is your last name? ";
	cin >> last_name;
	cout << "What letter grade do you deserve? ";
	cin >> letter_grade;
	
	cout << endl << "What is your age? ";
	cin >> age;
	
	cout << endl << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << letter_grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}