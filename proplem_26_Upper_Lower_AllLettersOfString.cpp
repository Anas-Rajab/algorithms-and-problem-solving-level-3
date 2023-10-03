//  write a program to read a string then upper all 
//	letters,then lower all letters , and print them.
//_____________________________________________

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Enter your string : ";
	getline(cin, s1);

	return s1;
}

string UpperAllStringLetters(string S1)
{
		for (short i = 0; i <= S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		}
	return S1;
}

string lowerAllStringLetters(string S1)
{
		for (short i = 0; i <= S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
	return S1;
}


int main()
{
	string S1 = ReadString();

	cout << "\nString after Upper :\n";
	S1 = UpperAllStringLetters(S1);
	cout << S1 << endl;

	cout << "\nString after Lower :\n";
	S1 = lowerAllStringLetters(S1);
	cout << S1 << endl;

	return 0;
}

