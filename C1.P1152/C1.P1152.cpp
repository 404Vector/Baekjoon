#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	string buffer, temp;
	istringstream spliter;
	vector<string> splitedBufferColection;

	getline(cin, buffer);
	spliter = istringstream(buffer);

	while (getline(spliter, temp, ' '))
	{
		if (temp != "")
		{
			splitedBufferColection.push_back(temp);
		}
	}

	cout << splitedBufferColection.size() << endl;
}