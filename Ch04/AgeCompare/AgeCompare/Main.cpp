#include <iostream>

using namespace std;

int main()
{
	int adamAge = 0;
	int bobAge = 0;

	cout << "Enter age for Adam: ";
	cin >> adamAge;
	cout << "Enter age for Bob: ";
	cin >> bobAge;

	if (adamAge > 100 && bobAge > 100)
	{
		cout << "Adam and Bob are both over 100. Who cares who is older!";
	}
	else if (adamAge > bobAge)
	{
		cout << "Adam is older than Bob.";
	}
	else if (bobAge > adamAge)
	{
		cout << "Bob is older than Adam.";
	}
	else
	{
		cout << "Adam and Bob are the same age.";
	}

	cin.ignore();
	cin.get();

	return 0;
}