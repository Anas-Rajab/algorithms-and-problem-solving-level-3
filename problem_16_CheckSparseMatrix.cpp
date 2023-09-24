//  write a program to check if the matrix is sparce or not.
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

int CountNumberInMatrix(int Number, int Matrix[3][3], short Rows, short Cols)
{
	int NumberCount = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
				NumberCount += 1;
		}
	}
	return NumberCount;
}

bool IsSparcerMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;
	return(CountNumberInMatrix(0, Matrix, Rows, Cols) >= (MatrixSize / 2));
}


int main()
{
	//int Matrix1[3][3] = { {5,2,3},{4,5,6},{7,8,5} };
	int Matrix1[3][3] = { {5,0,0},{0,5,0},{0,0,5} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparcerMatrix(Matrix1, 3, 3))
		cout << "\n  YES: the martix is sparce." << endl;

	else
		cout << "\n  No: the martix is NOT sparce." << endl;

	system("pause>0");
}

