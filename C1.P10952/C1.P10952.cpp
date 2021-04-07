#include <iostream>
using namespace std;

int main() {
	int A, B;
	do
	{
		cin >> A >> B;
		if (cin.eof()) { break; }
		if (A == 0 && B == 0) { break; }
		cout << A + B << endl;

	} while (true);
}