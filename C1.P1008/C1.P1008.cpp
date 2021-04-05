#include <iostream>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(10);
	double a, b;

	cin >> a;
	cin >> b;

	if (a > 0 && b < 10)
	{
		cout << a / b << std::endl;
		return 0;
	}
	else
	{
		return -1;
	}
}