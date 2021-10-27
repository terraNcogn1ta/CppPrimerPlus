#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<double, 3> times;
	for (int i = 0; i < 3; i++)
		
	{
		cout << endl << "type in time #" << i+1 << ": ";
		cin >> times[i];
	}
	for (int i = 0; i < 3; i++)
		cout << "array[" << i << "] = " << times[i] << " , " << endl;
	cout << "average = " << (times[0] + times[1] + times[2]) / 3.0;
	return 0;
}