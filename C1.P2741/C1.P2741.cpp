#include <iostream>
using namespace std;

int main()
{
	int n;
	if (!scanf("%d", &n))
	{
		return 0;
	};
	if (n < 1 || n > 100000)
	{
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", i + 1);
	}
	return 0;
}