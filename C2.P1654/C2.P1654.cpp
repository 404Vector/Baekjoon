#include<iostream>
#include<climits>
#include<vector>

using namespace std;

static bool IsOverN(long long length, vector<long long> lineArray, long long currentLineNumber, long long requiredLineNumber)
{
	long long count = 0;
	for (int i = 0; i < currentLineNumber; i++) {
		count += lineArray[i] / length;
	}

	return (count >= requiredLineNumber);
}

int main()
{
	vector<long long> lineArray;
	long long currentLineNumber, requiredLineNumber;

	long long maxValue = 0;
	long long  cursorLeft = 0;
	long long  cursorRight = LLONG_MAX;
	cin >> currentLineNumber >> requiredLineNumber;
	for (int i = 0; i < currentLineNumber; i++) {
		long long line;
		cin >> line;
		lineArray.push_back(line);
	}

	while (cursorLeft <= cursorRight) {
		long long midValue = (cursorLeft + cursorRight) / 2;
		if (IsOverN(midValue, lineArray, currentLineNumber, requiredLineNumber))
		{
			cursorLeft = midValue + 1;
			maxValue = (midValue > maxValue) ? midValue : maxValue;
		}
		else
		{
			cursorRight = midValue - 1;
		}
	}

	cout << maxValue;

	return 0;
}