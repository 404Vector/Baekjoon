#include <iostream>
using namespace std;
#define scanf scanf_s

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
	while (n)
	{
		printf("%d\n", n);
		n--;
	}
	return 0;
}