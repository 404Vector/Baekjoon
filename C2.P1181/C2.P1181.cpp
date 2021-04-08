#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	vector < vector <string> > book(50);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		book[word.length() - 1].push_back(word);
	}

	for (int i = 0; i < 50; i++) {
		if (book[i].size() > 0) {
			sort(book[i].begin(), book[i].end());
			auto eraseBegin = unique(book[i].begin(), book[i].end());
			auto eraseEnd = book[i].end();
			book[i].erase(eraseBegin, eraseEnd);
			for (int j = 0; j < book[i].size(); j++)
			{
				cout << book[i][j] << "\n";
			}
		}
	}
	return 0;
}