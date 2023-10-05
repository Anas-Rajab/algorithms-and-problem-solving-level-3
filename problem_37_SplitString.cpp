//  write a program to read a string then make
//	 a function to split each word in vector.
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

int main()
{

	vector<string>vString = SplitString(ReadString()," ");

	for (string Word : vString)
	{
		cout << Word << endl;
	}

	system("pause>0");
}
