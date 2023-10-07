//  write a program to read a string  
//	     and reverse its word.
//_____________________________________________


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Pleas enter your string : " << endl;
	getline(cin, s1);

	return s1;
}

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

string ReverseWordsInString(string S1)
{
	vector<string>vString = SplitString(S1, " ");
	string S2 = "";

	// declare iterator
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		iter--;
		S2 += *iter + " ";
	}

	S2.substr(0, S2.length() - 1);     //remove last space.

	return S2;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString after reversing words:\n";

	cout << ReverseWordsInString(S1) << endl;

	system("pause>0");
}
