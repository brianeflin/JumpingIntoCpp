#include <iostream>

using namespace std;

int main()
{
	int option = 0;

	while (option != 1 && option != 2 && option != 3)
	{
		cout << "Enter option (1, 2, 3): ";
		cin >> option;
		//cout << "Option " << option << " selected.\n";
		
		if (option != 1 && option != 2 && option != 3)
		{
			cout << "Invalid option.\n\n";
		}
	}

	cout << "Option " << option << " selected.\n";

	cin.ignore();
	cin.get();

	return 0;
}