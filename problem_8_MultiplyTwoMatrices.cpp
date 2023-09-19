//write a program to fill two 3*3 matrix with random numbers.
// than multiplay them into a 3rd matrix and print it .
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

void FillMatrixWithRandomNumbers(int Array[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short y = 0; y < Cols; y++)
		{
			Array[i][y] = RandomNumber(1, 10);
		}
	}
}

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];

		}
	}

}

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << "\t";
		for (short y = 0; y < Cols; y++)
		{
			printf("%0*d\t", 2, Array[i][y]);
		}
		cout << endl;
	}
}


int main()
{
	//  seeds the random number generator in c++ , called only once (in main).
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	int Matrix2[3][3];
	int MatrixResults[3][3];


	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "  the following is a 3*3 randome matrix 1  : \n" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\n  the following is a 3*3 randome matrix 2  : \n" << endl;
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);

	cout << "\n  the following is Multiply Matrix 1 and 2 to a matrix 3  : \n" << endl;
	PrintMatrix(MatrixResults, 3, 3);



	return 0;
}

