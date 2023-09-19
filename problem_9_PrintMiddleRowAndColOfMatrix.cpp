//write a program to fill a 3*3 matrix , and print it.
// then print the middle row and middle col .
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

void PrintMiddleRowOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;

	for (short j = 0; j < Rows; j++)
	 {
		printf("   %0*d   ", 2, Matrix[MiddleRow][j]);
	 }
	

}

void PrintMiddleColOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf("   %0*d   ", 2, Matrix[i][MiddleCol]);

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

	cout << "\n  middle row of matrix is \n";
	PrintMiddleRowOfMatrix(matrix, 3, 3);

	cout << "\n\n  middle col of matrix is " << endl;
	PrintMiddleColOfMatrix(matrix, 3, 3);

	return 0;
}

