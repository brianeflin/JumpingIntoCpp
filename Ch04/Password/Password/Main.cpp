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

	cout << "User     : ";
	getline(cin, enteredUser, '\n');
	cout << "Password : ";
	getline(cin, enteredPswd, '\n');

	if ((enteredUser == "brian" && enteredPswd == "12345") || 
		(enteredUser == "diane" && enteredPswd == "54321"))
	{
		cout << "You're in!\n";
		cout << "You have cracked the most sophisticated security system ever devised.";
	}
	else
	{
		cout << "WRONG!\n";
		cout << "You get one more chance.\n";
		cout << "User     : ";
		getline(cin, enteredUser, '\n');
		cout << "Password : ";
		getline(cin, enteredPswd, '\n');

		if ((enteredUser == "brian" && enteredPswd == "12345") ||
			(enteredUser == "diane" && enteredPswd == "54321"))
		{
			cout << "You're in!\n";
			cout << "You have cracked the most sophisticated security system ever devised.";
		}
		else
		{
			cout << "WRONG AGAIN!\n";
			cout << "GO AWAY NOW!";
		}
	}

	//cin.ignore();
	cin.get();

	return 0;
}