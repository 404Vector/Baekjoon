#include <iostream>

static int Reverse(int n)
{
	int result = 0;
	while (n > 0)
	{
		result *= 10;
		result += (n % 10);
		n /= 10;
	}
	return result;
}

int main()
{
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);
	n1 = Reverse(n1);
	n2 = Reverse(n2);
	if (n1 > n2)
	{
		printf("%d\n", n1);
	}
	else
	{
		printf("%d\n", n2);
	}
}