#include <iostream>
#include <sstream>
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

struct Element
{
	int repeat;
	string text;
};

int main()
{
	int numberOfElements;
	vector<Element> elementsCollection = vector<Element>();
	cin >> numberOfElements;
	if (numberOfElements > 1000 || numberOfElements < 1)
	{
		return -1;
	}
	for (size_t i = 0; i < numberOfElements; i++)
	{
		string rawData = "";
		Element element = Element();
		while (rawData == "")
		{
			getline(cin, rawData);
		}

		auto splitedRawData = Split(rawData);
		element.repeat = stoi(splitedRawData[0]);
		element.text = splitedRawData[1];
		elementsCollection.push_back(element);
		if (element.repeat > 8 || element.repeat < 1)
		{
			return -1;
		}
		if (element.text.size() > 20 || element.text.size() < 1)
		{
			return -1;
		}
	}
	for (int i = 0; i < elementsCollection.size(); i++)
	{
		string output = "";
		auto element = elementsCollection[i];
		for (int j = 0; j < element.text.size(); j++)
		{
			for (int k = 0; k < element.repeat; k++)
			{
				output += element.text[j];
			}
		}
		cout << output << endl;
	}
	return 0;
}