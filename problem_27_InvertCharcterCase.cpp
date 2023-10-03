//  write a program to read a charcter then invert
//	it`s case and print it.
//_____________________________________________

#include <iostream>
#include <string>

using namespace std;

char ReadCharcter()
{
	char Ch1;

	cout << "Pleas enter your Charcter : ";
	cin >> Ch1;

	return Ch1;
}

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

int main()
{
	char Ch1 = ReadCharcter();

	cout << "\nCharcter after invert :\n";
	cout << InvertLetterCase(Ch1) << endl;

	return 0;
}

