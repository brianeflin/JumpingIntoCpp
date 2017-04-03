#include <iostream>

using namespace std;

int main()
{
	float sum = 0;
	float num = 0;

	do
	{
		cout << "Enter number to sum (zero to end): ";
		cin >> num;
		sum += num;
	} while (num != 0);

	cout << "Total: " << sum << "\n";

	cin.ignore();
	cin.get();

	return 0;
}