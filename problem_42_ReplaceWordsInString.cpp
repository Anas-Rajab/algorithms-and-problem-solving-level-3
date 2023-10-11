//  write a program to replace words
//       in  a string .
//________________________________________


#include <iostream>
#include <string>

using namespace std;

//  Using Built In Function.
string ReplaceWordInString(string S1,string StringToReplace,string ReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos!=std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo);

		pos = S1.find(StringToReplace);  //find next
	}

	return S1;
}


int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\nOrigial String\n" << S1;
	cout << "\n\nString After Replace:";
	cout << "\n" << ReplaceWordInString(S1, StringToReplace, ReplaceTo) << endl;


	system("pause>0");

}
