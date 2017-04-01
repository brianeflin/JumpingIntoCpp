#include <iostream>

using namespace std;

int main()
{
	float num1 = 0;
	float num2 = 0;

	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
	cout << num1 << " divided by " << num2 << " is " << num1 / num2 << endl;


	cin.ignore();
	cin.get();

	return 0;
}