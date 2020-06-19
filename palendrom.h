#include <iostream>

using namespace std;

bool palindrom5(int);

int main(int argc, char* argv[])
{
	cout << "Enter 5zn-e chislo:";
	int in_number, out_number;

	cin >> in_number;
	out_number = in_number;

	if (palindrom5(in_number))
	{
		cout << "Number " << out_number << " - palendrom" << endl;
	}
	else
	{
		cout << "This is not palendrom" << endl;
	}

	return 0;
}

bool palindrom5(int number)
{
	int balance1, balance2, balance4, balance5;

	balance1 = number % 10;
	number = number / 10;

	balance2 = number % 10;
	number = number / 100;

	balance4 = number % 10;
	number = number / 10;

	balance5 = number % 10;

	if ((balance1 == balance5) && (balance2 == balance4))
	{
		return true;
	}
	else
	{
		return false;
	}
}