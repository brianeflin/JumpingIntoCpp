#include <iostream>

using namespace std;

int main()
{
	float num1 = 0;
	float num2 = 0;
	char op;

	cout << "First number: ";
	cin >> num1;
	cout << "Arithmetic operation (+, -, *, /): ";
	cin >> op;
	cout << "Second number: ";
	cin >> num2;

	cout << num1 << " " << op << " " << num2 << " = ";

	if (op == '+')
	{
		cout << num1 + num2;
	}
	else if (op == '-')
	{
		cout << num1 - num2;
	}
	else if (op == '*')
	{
		cout << num1 * num2;
	}
	else if (op == '/')
	{
		cout << num1 / num2;
	}
	else
	{
		cout << "\nUnknown arithmetic operation.";
	}

	cin.ignore();
	cin.get();

	return 0;
}