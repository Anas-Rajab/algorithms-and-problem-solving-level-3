//  write a program to read a character the check
//	   if it is a vowel or Not.
//  Vowels Letters[5] = {a ,e ,i ,o ,u }
//_____________________________________________

#include <iostream>
#include <string>

using namespace std;

char ReadCharacter()
{
	char Ch1;

	cout << "\nPleas enter your Character : ";
	cin >> Ch1;

	return Ch1;
}

bool IsVowel(char Letter)
{
	//  Ch1 = tolower(Ch1);
	//	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i')
	//                       || (Ch1 == 'o') || (Ch1 == 'u'));

	char VowelsLetters[5] = { 'a' ,'e' ,'i' ,'o' , 'u' };

	for (short i = 0; i <= 5 - 1; i++)
	{
		if (VowelsLetters[i] == tolower(Letter))
		{
			return true;
		}

	}
	return false;
}

int main()
{ 
	char Ch1 = ReadCharacter();

	if (IsVowel(Ch1))
	{
		cout << "\nYes letter '" << Ch1 << "'is vowel." << endl;
	}

	else
	{
		cout << "\nNo letter '" << Ch1 << "'is Not vowel." << endl;
	}

	return 0;
}