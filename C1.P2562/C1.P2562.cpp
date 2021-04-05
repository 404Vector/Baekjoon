#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static const int numberOfNumbers = 9;

template<typename T>
static T GetMaxOfValues(vector<T> values)
{
	return *max_element(values.begin(), values.end());
}

int main()
{
	int max, maxIndex;
	vector<int> numbers;
	for (int i = 0; i < numberOfNumbers; i++)
	{
		int number;
		cin >> number;
		if (number < 100)
		{
			numbers.push_back(number);
		}
		else
		{
			return -1;
		}
	}
	max = numbers[0];
	maxIndex = 0;
	for (int i = 1; i < numberOfNumbers; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			maxIndex = i;
		}
	}
	std::cout << max << endl;
	std::cout << maxIndex + 1 << endl;
}