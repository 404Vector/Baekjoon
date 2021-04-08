#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	bool conditionA, conditionB, conditionC;
	cin >> x >> y >> w >> h;
	conditionA = (w >= 1 && h <= 1000);
	conditionB = (x >= 1 && x <= w - 1);
	conditionC = (y >= 1 && y <= h - 1);
	if (!(conditionA && conditionB && conditionC))
	{
		return -1;
	}

	int dx = ((2 * x) < w) ? x : w - x;
	int dy = ((2 * y) < h) ? y : h - y;
	int dl = (dx < dy) ? dx : dy;
	cout << dl << "\n";;
	return 0;
}