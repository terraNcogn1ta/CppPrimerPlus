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

	};

	
	CandyBar *snickers = new(CandyBar) { "Snickers", 1.5, 10 };
	CandyBar *twix = new(CandyBar) { "Twix", 2.5, 20 };
	CandyBar *mars = new(CandyBar) { "Mars", 3.5, 30 };
	cout << "Snickers: name = " << snickers->name << ", weight = " << snickers->weight << ", calories = " << snickers->calories << endl;
	cout << "Twix: name = " << twix->name << ", weight = " << twix->weight << ", calories = " << twix->calories << endl;
	cout << "Mars: name = " << mars->name << ", weight = " << mars->weight << ", calories = " << mars->calories << endl;

	return 0;
}