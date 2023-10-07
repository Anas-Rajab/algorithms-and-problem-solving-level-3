//  write a program to join array of string
//	  into one string with separators.
//_____________________________________________

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vstring, string Delim)
{
	string S1 = "";
	for (string& Word : vstring)
	{
		S1 += Word + Delim;
	}
	return  S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string arrString[], short Length, string Delim)
{
	string S1 = "";
	for (short i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}
	return  S1.substr(0, S1.length() - Delim.length());
}


int main()
{
	vector<string> vString = { "anas","mohammed","ahmed" };

	string arrString[] = { "sara","Arwa","Joan","Maher" };

	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");

	cout << "\n\nArray after join: \n";
	cout << JoinString(arrString, 4, " ") << endl;


	system("pause>0");
}
