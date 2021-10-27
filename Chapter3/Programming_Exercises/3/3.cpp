#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int size = 100;
	char first_name[size], second_name[size];
	cout << "Type in your first name: ";
	cin.getline(first_name, size);
	cout << endl << "Type in your second name: ";
	cin.getline(second_name, size);
	char final[size + size];
	char space[3] = { ',', ' ', '\0'};
	strcpy(final, first_name);
	strcat(final, space);
	strcat(final, second_name);
	cout << final;
	return 0;
}