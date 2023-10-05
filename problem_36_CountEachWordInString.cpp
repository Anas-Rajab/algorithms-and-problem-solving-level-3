//  write a program to read a string then 
//	 count each word in that string.
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


short CountEachWord(string S1)
{
	string Dilim = " ";      //  delimiter
	short Pos = 0;
	string sWord;			// define a string variable
	short Count = 0;

	// use find() function to get the position of the delimiters
	while ((Pos = S1.find(Dilim)) != std::string::npos)
	{
		sWord = S1.substr(0, Pos);	// store the word

		if (sWord != "")
		{
			Count++;
		}
		// erase() until positon and move to next word.
		S1.erase(0, Pos + Dilim.length());
	}

	if (S1 != "") 
	{
		Count++;  // it counts the last word of the string
	}
	return Count;
}

int main()
{
	string S1 = ReadString();

	cout << "\nThe number of word in your string is: " 
		<< CountEachWord(S1) << endl;
	
	system("pause>0");
}



