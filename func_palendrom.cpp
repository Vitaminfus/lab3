#include <iostream>
#include "palendrom.h"
using namespace std;

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