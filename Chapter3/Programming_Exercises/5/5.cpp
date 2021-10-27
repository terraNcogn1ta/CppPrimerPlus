#include <iostream>
#include <string>
using namespace std;
int main()
{
	struct CandyBar
	{
		string name;
		double weight;
		int calories;

	} snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.name << " " << snack.weight << " " << snack.calories;
	return 0;
}