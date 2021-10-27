#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct pizza
	{
		string name;
		double diameter;
		double weight;
	};

	pizza *input = new(pizza);
	cout << "Enter the name of a pizza: ";
	getline(cin, input->name);
	cout << "Enter the diameter of a pizza: ";
	cin >> input->diameter;
	cout << "Enter the weight of a pizza: ";
	cin >> input->weight;
	cout << endl << "Data info: name = " << input->name << endl
		<< "           diameter = " << input->diameter << endl
		<< "           weight = " << input->weight << endl;
	delete(input);	
	return 0;
}