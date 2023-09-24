//   write a program to print the intersected numbers
//		     in two given matrices .
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

bool IsNumberInMatrix(int Number, int Matrix[3][3], short Rows, short Cols)
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

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	cout << "\nIntersected numbers are : " << endl;
	cout << "\t";

	int number;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			number = Matrix1[i][j];
			if (IsNumberInMatrix(number, Matrix2, Rows, Cols))
				cout << number << "    ";
		}
	}
}

int main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int Matrix2[3][3] = { {2,80,90},{22,77,1},{10,8,33} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	cout << "  matrix 2 : \n" << endl;
	PrintMatrix(Matrix2, 3, 3);

	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

	return 0;
}

