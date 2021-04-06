#include <iostream>
#include <vector>
using namespace std;

const int keyValue = 42;

int main()
{
	int inputArray[10] = { 0, };
	int modStackArray[10] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		int v;
		bool isOld = false;
		cin >> v;
		if (v > 1000 || v < 0) { return 0; }
		inputArray[i] = v;
		modStackArray[i] = v % keyValue;
		for (int j = i - 1; j >= 0; j--)
		{
			isOld = isOld || (modStackArray[i] == modStackArray[j]);
		}
		count = (isOld) ? count : count + 1;
	}
	std::cout << count << endl;

	return 0;
}