#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

static string CompareValue(int A, int B) { return ((A > B) ? ">" : (A < B) ? "<" : "=="); }

static vector<string> Split(string buffer, char key = ' ')
{
	string temp;
	istringstream spliter;
	vector<string> splitedBufferColection;
	spliter = istringstream(buffer);

	while (getline(spliter, temp, key))
	{
		if (temp != "")
		{
			splitedBufferColection.push_back(temp);
		}
	}
	return splitedBufferColection;
}

int main()
{
	int A, B;
	string buffer;
	getline(cin, buffer);
	auto collection = Split(buffer);
	if (collection.size() != 2)
	{
		return -1;
	}
	A = stoi(collection[0]);
	B = stoi(collection[1]);
	if (A >= -10000 && B <= 10000)
	{
		cout << CompareValue(A, B) << endl;
	}
	return 0;
}