//  write a program to remove all
//   punctuations from a string .
//________________________________________


#include <iostream>
#include <string>

using namespace std;

string RemovePunctuations(string S1)
{
	string S2 = "";
	for (short i = 0; i <= S1.length() - 1; i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}

int main()
{
	string S1 = "Welcome: to Jordan. , Jordan is a nice, country";
	cout << "\nOrigial String\n" << S1;

	cout << "\n\nPauncuations Removed:\n";
	cout << RemovePunctuations(S1) << endl;
	system("pause>0");

}
