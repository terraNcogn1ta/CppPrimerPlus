#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, secondName;
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << endl << "Enter your second name: ";
	getline(cin, secondName);
	cout << endl << firstName + ", " + secondName << endl;
	return 0;
}