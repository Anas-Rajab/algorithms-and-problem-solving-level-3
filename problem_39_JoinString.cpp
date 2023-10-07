//  write a program to join vector of string
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


int main()
{
	vector<string>vName = { "anas","mohammed","ahmed" };

	cout << JoinString(vName, "  ");


	system("pause>0");
}
