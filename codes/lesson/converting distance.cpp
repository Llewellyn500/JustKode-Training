#include <iostream>
using namespace std;
int main()
{
	double feet, miles, yards;
	int distance;
	cout << "Enter distance:";
	cin >> distance;

	miles = distance / 5280;
	yards = (distance % 5280) / 3;
	feet = (distance % 5280) % 3;

	if (miles > 0)
	{
		cout << miles;
		if (miles == 1)
		{
			cout << " mile ";
		}
		else
		{
			cout << " miles ";
		}
	}
	if (yards > 0)
	{
		cout << yards;
		if (yards == 1)
		{
			cout << " yard ";
		}
		else
		{
			cout << " yards ";
		}
	}
	if (feet > 0)
	{
		cout << feet;
		if (feet == 1)
		{
			cout << " foot ";
		}
		else
		{
			cout << " feet ";
		}
	}

	return 0;
}
