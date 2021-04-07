#include<iostream>
using namespace std;
main()
{
	int a, c, i;
	char b;
	c = 0;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> b;
		c += b - 48;
	}
	cout << c << endl;
}