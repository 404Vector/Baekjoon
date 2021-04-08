#include <iostream>
#include <vector>

using namespace std;

static int CountNumber(unsigned long long value, int key, int numberOfMinKeyRepeat) {
	unsigned long long tempValue = value;
	int count = 0;
	while (true)
	{
		count = (tempValue % 10 == key) ? count + 1 : 0;
		tempValue /= 10;
		if (tempValue == 0 || count >= numberOfMinKeyRepeat) {
			break;
		}
	}
	return count;
}

static int GetName(int n, int key, int numberOfMinKeyRepeat) {
	int nTemp = 0;
	unsigned long long i = 0;
	while (true)
	{
		if (CountNumber(i, key, numberOfMinKeyRepeat) >= numberOfMinKeyRepeat)
		{
			nTemp = nTemp + 1;
			//printf("%d: %d\n", nTemp, i);
		}
		if (nTemp == n) {
			break;
		}
		i++;
	}
	return i;
}

int main()
{
	int n;
	cin >> n;
	if (n > 10000) {
		return 0;
	}
	cout << GetName(n, 6, 3) << "\n";

	return 0;
}