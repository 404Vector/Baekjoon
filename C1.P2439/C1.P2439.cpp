#include <iostream>
#include <iomanip>
#include<sstream>

using namespace std;

int main()
{
	int count = 0;
	string text = "";
	cin >> count;
	if (!(count >= 1 && count <= 100)) { return -1; }
	for (size_t i = 0; i < count; i++)
	{
		text.append("*");
		cout.setf(ios::right);
		cout << setw(count) << text << endl;
	}

	return 0;
}