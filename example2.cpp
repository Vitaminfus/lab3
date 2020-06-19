#include <iostream>

using namespace std;

//2nd example
int faktorial(int numb)
{
	int rezult = 1;
	for (int i = 1; i <= numb; i)
	{
		rezult *= i;
	}
	return rezult;
}

int main(int argc, char*argv[])
{
	int digit;
	cout << "Enter number:";
	cin >> digit;
	cout << digit << "!=" << faktorial(digit) << endl;

	return 0;
}