#include <iostream>
#include <vector>

using namespace std;

static vector<bool> GetPrimeArray(int rangeMax)
{
	vector<bool> PrimeArray(rangeMax + 1, true);
	PrimeArray[0] = false;
	PrimeArray[1] = false;
	for (int i = 2; i * i <= rangeMax; i++)
	{
		if (PrimeArray[i])
		{
			for (int j = i * i; j <= rangeMax; j += i)
			{
				PrimeArray[j] = false;
			}
		}
	}
	return PrimeArray;
}

int main()
{
	int minRange, maxRange;
	cin >> minRange >> maxRange;

	auto primeArray = GetPrimeArray(maxRange);
	for (int i = minRange; i <= maxRange; i++)
	{
		if (primeArray[i])
		{
			printf("%d\n", i);
		}
	}

	return 0;
}