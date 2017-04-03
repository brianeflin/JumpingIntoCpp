#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user1 = "brian";
	string pswd1 = "12345";
	string user2 = "diane";
	string pswd2 = "54321";
	string enteredUser;
	string enteredPswd;
	int failedAttempts = 0;
	const int MAX_FAILED_ATTEMPTS = 3;

	while (failedAttempts < MAX_FAILED_ATTEMPTS)
	{
		cout << "User     : ";
		getline(cin, enteredUser, '\n');
		cout << "Password : ";
		getline(cin, enteredPswd, '\n');

		if ((enteredUser == "brian" && enteredPswd == "12345") ||
			(enteredUser == "diane" && enteredPswd == "54321"))
		{
			cout << "You're in!\n";
			cout << "You have cracked the most sophisticated security system ever devised.";
			break;
		}
		else
		{
			if (failedAttempts < MAX_FAILED_ATTEMPTS - 1)
			{
				cout << "WRONG!\n";
			}
			else
			{
				cout << "WRONG!\n";
				cout << "YOU'RE DONE!";
			}

			failedAttempts++;
		}
	}

	//cin.ignore();
	cin.get();

	return 0;
}