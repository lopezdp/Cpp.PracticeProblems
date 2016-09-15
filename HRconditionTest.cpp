#include <iostream>
#include <string>

using namespace std;

int main()
{

	int input;
	string numStr[10] = { "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	cout << "Enter input now: ";

	cin >> input;

	if(input > 9)
	{
		cout << numStr[0];
	}
	else 
	{
		cout << numStr[input];
	}

	return 0;
}

