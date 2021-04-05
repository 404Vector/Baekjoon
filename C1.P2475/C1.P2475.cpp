#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

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
	string numbersTextStream;
	int squresum = 0;
	getline(cin, numbersTextStream);
	auto numbersTextCollection = Split(numbersTextStream);
	auto numbersCollection = new vector<int>();
	for (size_t i = 0; i < numbersTextCollection.size(); i++)
	{
		int number = stoi(numbersTextCollection[i]);
		squresum += number * number;
		numbersCollection->push_back(number);
	}
	cout << squresum % 10 << endl;;
	numbersCollection->clear();
	delete	numbersCollection;
	return 0;
}