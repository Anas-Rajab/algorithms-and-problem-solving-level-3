//  write a program to check if a given number exists
//		 in the matrix is scalar or not.
//_______________________________________

#include <iostream>
#include <iomanip>	  
#include <string>

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << "\t";
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d   ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}

int ReadNumber()
{
	int Number = 0;

	cout << "\n Please Enter the number to look for in matrix ? : ";
	cin >> Number;

	while (cin.fail())
	{
		// user didnt insert number:
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid number ,enter avalid one : " << endl;
		cin >> Number;
	}
	return Number;
}

bool IsNumberInMatrix(int Number,int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
				return true;
		}
	}
	return false;
}


int main()
{
	int Matrix1[3][3] = { {77,8,12},{22,20,1},{1,0,9} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	if (IsNumberInMatrix(ReadNumber(),Matrix1, 3, 3))
		cout << "\nYes it is there.\n";

	else
		cout << "\nNo: It's NOT there.\n";

	cout << endl;
	return 0;
}

