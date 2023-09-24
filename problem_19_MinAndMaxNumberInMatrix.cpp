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


int MinimumNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int MinNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (MinNumber > Matrix[i][j])
			{
				MinNumber = Matrix[i][j];
			}
		}
	}
	return MinNumber;
}

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int MaxNumber = Matrix[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (MaxNumber < Matrix[i][j])
			{
				MaxNumber = Matrix[i][j];
			}
		}
	}
	return MaxNumber;
}

int main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	//int Matrix2[3][3] = { {2,80,90},{22,77,1},{10,8,33} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMinimum number is : " << MinimumNumberInMatrix(Matrix1, 3, 3) << endl;

	cout << "\nMax number is : " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;


	return 0;
}

