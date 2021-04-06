#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;

	bool b4 = !(year % 4);
	bool b100 = !(year % 100);
	bool b400 = !(year % 400);
	if ((b4 && !b100) || (b400))
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}
}