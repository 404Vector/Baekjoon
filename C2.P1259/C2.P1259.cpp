#include <iostream>

using namespace std;

static int Reverse(int n)
{
	int result = 0;
	while (n > 0)
	{
		result *= 10;
		result += (n % 10);
		n /= 10;
	}
	return result;
}

int main()
{
	while (true)
	{
		int value, rValue;
		cin >> value;
		rValue = Reverse(value);
		if (value == 0) {
			break;
		}
		if (value == rValue) {
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}
	}
	return 0;
}