#include <iostream>
#include <vector>
#include <algorithm>

#define int64 long long
using namespace std;

static int IsIncluded(int64& value, vector<int64>& collection, int cursorLeft, int cursorRight)
{
	while (cursorLeft <= cursorRight)
	{
		int cursorMid = (cursorLeft + cursorRight) / 2;
		if (collection[cursorMid] == value)
		{
			return 1;
		}
		else if (collection[cursorMid] < value)
		{
			cursorLeft = cursorMid + 1;
		}
		else
		{
			cursorRight = cursorMid - 1;
		}
	}
	return 0;
}

int main()
{
	int numberOfA, numberOfB;
	vector<int64> A, B;

	cin >> numberOfA;
	for (int i = 0; i < numberOfA; i++)
	{
		int64 value;
		cin >> value;
		A.push_back(value);
	}

	cin >> numberOfB;
	for (int i = 0; i < numberOfB; i++)
	{
		int64 value;
		cin >> value;
		B.push_back(value);
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < numberOfB; i++)
	{
		int val = IsIncluded(B[i], A, 0, numberOfA - 1);
		printf("%d\n", val);
	}
}