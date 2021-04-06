#include <iostream>

int main()
{
	int score;
	std::cin >> score;
	char grad = (score >= 90) ? 'A'
		: (score >= 80) ? 'B'
		: (score >= 70) ? 'C'
		: (score >= 60) ? 'D'
		: 'F';
	printf("%c", grad);
}