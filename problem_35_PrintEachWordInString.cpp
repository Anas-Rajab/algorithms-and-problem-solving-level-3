//  write a program to read a string then 
//	print each word in that string.
//_____________________________________________


#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Pleas enter your string : " << endl;
	getline(cin, s1);

	return s1;
}


void PrintEachWord(string S1)
{
	string Dilim = " ";       //  delimiter
	short Pos;
	string sWord;		// define a string variable

	// use find() function to get the position of the delimiters

	while ((Pos=S1.find(Dilim))!=std::string::npos)
	{
		sWord = S1.substr(0, Pos);// store the word

		if (sWord != "")
		{
			cout << sWord << endl;
		}
		// erase() until positon and move to next word.
		S1.erase(0, Pos + Dilim.length());
	}

	if (S1 != "") // it print last word of the string.
	{
		cout << S1 << endl;
	}
}

int main()
{
	PrintEachWord(ReadString());

	return 0;
}



