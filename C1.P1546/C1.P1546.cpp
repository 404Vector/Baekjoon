#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

static string CompareValue(int A, int B) { return ((A > B) ? ">" : (A < B) ? "<" : "=="); }

static vector<string> Split(string buffer, char key = ' ')
{
	string temp;
	istringstream spliter;
	vector<string> splitedBufferColection;
	spliter = istringstream(buffer);

	while (getline(spliter, temp, key))
	{
		if (temp != "")
		{
			splitedBufferColection.push_back(temp);
		}
	}
	return splitedBufferColection;
}

template <typename T>
static void WeightOfValues(T weight, vector<T>& values)
{
	for (size_t i = 0; i < values.size(); i++)
	{
		values[i] = values[i] * weight;
	}
}

template <typename T>
static T SumOfValues(vector<T>& values)
{
	T sum = values[0];
	for (size_t i = 1; i < values.size(); i++)
	{
		sum += values[i];
	}
	return sum;
}

int main()
{
	int count;
	double sum, max, weight, weightedMean;
	vector<double> scores;
	string countText, scoresText;
	vector<string> scoreTextCollection;
	sum = 0;

	//cin >> countText;
	getline(cin, countText);
	count = stoi(countText);

	getline(cin, scoresText);
	scoreTextCollection = Split(scoresText);
	if (count > 1000 || scoreTextCollection.size() != count) { return -1; }

	for (size_t i = 0; i < scoreTextCollection.size(); i++)
	{
		double score = stoi(scoreTextCollection[i]);
		if (score < 100 || score > -1)
		{
			scores.push_back(score);
			sum += score;
		}
		else
		{
			return -1;
		}
	}
	if (sum == 0) { return -1; }

	max = *max_element(scores.begin(), scores.end());
	weight = 100 / max;
	WeightOfValues<double>(weight, scores);
	weightedMean = SumOfValues<double>(scores) / count;
	//cout << fixed;
	cout.precision(7);
	cout << weightedMean << endl;
	return 0;
}