#include <stdio.h>
#include <iostream>
using namespace std;

const int mSift = 45;

int main()
{
	int hour, minute;
	int dhour, dminute;
	scanf_s("%d %d", &hour, &minute);
	if (hour < 0 || hour > 23) { return -1; }
	if (minute < 0 || minute > 59) { return -1; }
	minute -= mSift;
	dminute = (minute + 60) % 60;
	dhour = (minute > -1) ? (minute / 60) : -1;
	dhour = (hour + dhour + 24) % 24;
	printf("%d %d", dhour, dminute);
	return 0;
}