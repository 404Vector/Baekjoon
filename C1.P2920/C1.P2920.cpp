#include <iostream>

int main()
{
	int buf[8] = { 0, };
	scanf_s("%d %d %d %d %d %d %d %d", &buf[0], &buf[1], &buf[2], &buf[3], &buf[4], &buf[5], &buf[6], &buf[7]);

	bool ascending = false;
	bool descending = false;
	for (int i = 1; i < 8; i++)
	{
		int delta = buf[i] - buf[i - 1];
		ascending = ascending || delta > 0;
		descending = descending || delta < 0;
	}
	if (ascending && !descending)
	{
		std::cout << "ascending\n";
	}
	else if (!ascending && descending)
	{
		std::cout << "descending\n";
	}
	else
	{
		std::cout << "mixed\n";
	}
}