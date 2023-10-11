//  write a program to replace words
//  in  a string using custom function.
//________________________________________


#include <iostream>
#include <string>
#include<vector>

using namespace std;

vector<string>SplitString(string S1, string Dilim)
{
	vector<string>vString;

	short Pos = 0;
	string sWord;			// define a string variable

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Dilim)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos);	// store the word

		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		// erase() until positon and move to next word.
		S1.erase(0, Pos + Dilim.length());
	}

	if (S1 != "")
	{
		// it adds last word of the string
		vString.push_back(S1);
	}
	return vString;
}

string lowerAllStringLetters(string S1)
{
	for (short i = 0; i <= S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string JoinString(vector<string> vstring, string Delim)
{
	string S1 = "";
	for (string& Word : vstring)
	{
		S1 += Word + Delim;
	}
	return  S1.substr(0, S1.length() - Delim.length());
}


//  using custom function.
string ReplaceWordsInString(string S1, string StringToReplace, string ReplaceTo, bool MachCase = true)
{
	vector<string>vString = SplitString(S1, " ");

	for (string& s : vString)
	{
		if (MachCase)
		{
			if (s == StringToReplace)
			{
				s = ReplaceTo;
			}
		}
		else
		{
			if (lowerAllStringLetters(s) == lowerAllStringLetters(StringToReplace))
			{
				s = ReplaceTo;
			}
		}

	}

	return JoinString(vString," ");
}

int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";

	cout << "\nOrigial String\n" << S1;

	cout << "\n\nReplace with match case: \n"; 
	cout << ReplaceWordsInString(S1, StringToReplace, ReplaceTo,false);

	cout << "\n\nReplace with dont match case: \n";
	cout << ReplaceWordsInString(S1, StringToReplace, ReplaceTo);


	system("pause>0");

}
