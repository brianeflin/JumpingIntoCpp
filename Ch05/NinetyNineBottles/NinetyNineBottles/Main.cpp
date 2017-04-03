#include <iostream>

using namespace std;

int main()
{
	for (int i = 99; i > 1; i--)
	{
		cout << "\n" << i << " bottles of beer on the wall,\n";
		cout << i << " bottles of beer.\n";
		cout << "Take one down, pass it around.\n";
		if (i > 2)
		{
			cout << i - 1 << " bottles of beer on the wall.\n";
		}
		else
		{
			cout << i - 1 << " bottle of beer on the wall.\n";
		}
	}

	cout << "\n1 bottle of beer on the wall,\n";
	cout << "1 bottle of beer.\n";
	cout << "Take one down, pass it around.\n";
	cout << "No more bottles of beer on the wall.\n";

	cin.get();

	return 0;
}