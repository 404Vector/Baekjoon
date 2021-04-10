#include<iostream>
#include<climits>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	string operation = "";
	int number, adress;
	stack<int> myStack;
	vector<int> targetCollection;

	adress = 0;
	cin >> number;
	for (size_t i = 0; i < number; i++)
	{
		int value;
		cin >> value;
		targetCollection.push_back(value);
	}
	for (size_t i = 1; i <= number; i++)
	{
		myStack.push(i);
		operation.append("+\n");
		while (!myStack.empty())
		{
			if (targetCollection[adress] == myStack.top())
			{
				myStack.pop();
				operation.append("-\n");
				adress++;
				if (adress == number)
				{
					break;
				}
			}
			else
			{
				break;
			}
		}
	}
	string result = (adress != number) ? "NO\n" : operation;
	printf(result.c_str());
	return 0;
}