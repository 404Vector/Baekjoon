#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

const char startKey = 'A';
const char endKey = 'Z';
const char unknownKey = '?';
const int stackLength = endKey - startKey + 1;

/// <summary>
/// call by reference
/// </summary>
/// <param name="buffer"></param>
static void LowerToUpper(string& buffer)
{
	for (int i = 0; i < buffer.size(); i++)
	{
		buffer[i] = toupper(buffer[i]);
	}
}

int main()
{
	int nocStack[stackLength] = { 0, };
	int maxStack = 0;
	char maxKey = unknownKey;
	string buffer;
	cin >> buffer;
	LowerToUpper(buffer);
	bool isTwin = false;
	for (auto i = 0; i < buffer.length(); i++)
	{
		nocStack[buffer[i] - startKey] += 1;
	}
	for (size_t i = 0; i < stackLength; i++)
	{
		if ((maxStack <= nocStack[i]))
		{
			isTwin = (maxStack == nocStack[i]);
			maxStack = nocStack[i];
			maxKey = startKey + i;
		}
	}
	cout << ((isTwin) ? unknownKey : maxKey) << endl;
}