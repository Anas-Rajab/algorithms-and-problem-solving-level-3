//  write a program to fill a 3*3 matrix with random number, and print it.
//  then write a function to sum all numbers in this matrix.
//  and print it.
//_______________________________________

#include <iostream>
#include <iomanip>	  
#include <string>

using namespace std;

int RandomNumber(int From, int To)
{
	// function to generate a random number.
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

int SumOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}

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



int main()
{
	//  seeds the random number generator in c++ , called only once (in main).
	srand((unsigned)time(NULL));

	int matrix[3][3];

	FillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "  the following is a 3*3 randome matrix : \n" << endl;
	PrintMatrix(matrix, 3, 3);

	cout << "\n  sum of matrix is : " << SumOfMatrix(matrix, 3, 3) << endl;

	return 0;
}

