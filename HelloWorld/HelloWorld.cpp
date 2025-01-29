// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;


//class
class LoginInfo
{
private: 
	int ID;
	string Username;
	string Passwd;

public:

	//Constructor
	LoginInfo (int id, const string& username, const string& passwd)
		: ID(id), Username(username), Passwd(passwd)
	{ }

	//Login
	bool Login(const::string& enteredUserName, const::string& enteredPassword)
	{
		return (Username == enteredUserName && Passwd == enteredPassword);
	}

	int getID() const 
	{
		return ID;
	}

};

int main()
{
	int ID;
	string Username;
	string Passwd;

	cout << "Enter your ID: ";
	cin >> ID;

	cout << "Enter your Username: ";
	cin >> Username;

	cout << "Enter your Password: ";
	cin >> Passwd;

	LoginInfo account(ID, Username, Passwd);
		while (true)
		{
			string enteredUserName, enteredPassword;

			cout << "Enter your ID: ";
			cin >> ID;

			cout << "Enter your Username: ";
			cin >> Username;

			cout << "Enter your Password: ";
			cin >> Passwd;

			if (account.Login(Username, Passwd)) 
			{
				cout << "Login Sucessful\n";
				break;
			}

			else 
			{
				cout << "Login failed please try again:\n";
			}

		}
		//in c# means code was successful
	return 0;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
