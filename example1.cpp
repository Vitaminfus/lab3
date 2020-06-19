#include <iostream>

using namespace std;

//1st example
void faktorial(int numb)
{
	int rezult = 1;
	for (int i = 1; i <= numb; i++)
	{
		rezult *= i;
	}
	cout << numb << "!=" << rezult << endl;
}

int main(int argc, char* argv[])
{
	int digit;
	cout << "Enter number:";
	cin >> digit;
	faktorial(digit);
	
	return 0;
}