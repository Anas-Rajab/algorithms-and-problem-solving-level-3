//  write a program to check if the matrix is scalar or not.
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

bool IsScalarMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int FirstDiagElemement = Matrix1[0][0];

	//check Diagonal elements are same number, and rest elements are 0

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//check for diagonals element
			if (i == j && FirstDiagElemement != Matrix1[i][j])
			{
				return false;
			}

			//check for rest elements
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{
	int Matrix1[3][3]={{5,2,3},{4,5,6},{7,8,5}};
	//int Matrix1[3][3] = { {5,0,0},{0,5,0},{0,0,5} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	if (IsScalarMatrix(Matrix1, 3, 3))
		cout << "\n  YES: the martix is identity." << endl;

	else
		cout << "\n  No: the martix is NOT identity." << endl;

	return 0;
}

