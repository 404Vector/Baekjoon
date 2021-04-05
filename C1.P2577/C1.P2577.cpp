#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

static const int numberOfNumbers = 3;
static const char startKey = '0';
static const char endKey = '9';
static const int length = (endKey - startKey + 1);

int main()
{
	int mult = 1;
	int numberStack[length] = { 0, };
	vector<int> numbers;
	string multText;
	for (int i = 0; i < numberOfNumbers; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
	}
	for (int i = 0; i < numberOfNumbers; i++)
	{
		mult *= numbers[i];
	}
	multText = to_string(mult);
	for (size_t i = 0; i < multText.length(); i++)
	{
		auto c = multText[i];
		if (c >= startKey && c <= endKey)
		{
			numberStack[c - startKey] ++;
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		std::cout << numberStack[i] << endl;
	}
}