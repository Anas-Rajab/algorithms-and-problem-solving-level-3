//   write a program to check if the Matrix is
//		    palindrome or not.
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


bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
				return false;

		}
	}
	return true;
}

void PrintResults(int Matrix[3][3], short Rows, short Cols)
{
	if (IsPalindromeMatrix(Matrix, Rows, Cols))
	{
		cout << "\n Yes : Matrix is Palindrome.\n";
	}
	else
	{
		cout << "\n No : Matrix is Not Palindrome.\n";
	}
	cout << endl;
}

int main()
{
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	int Matrix2[3][3] = { {1,2,1},{5,5,5},{7,3,8} };

	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);
	PrintResults(Matrix1, 3, 3);

	cout << "  matrix 2 : \n" << endl;
	PrintMatrix(Matrix2, 3, 3);
	PrintResults(Matrix2, 3, 3);


	return 0;
}

