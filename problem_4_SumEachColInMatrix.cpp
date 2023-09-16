// write a program to fill a 3*3 matrix . 
// then  print sum each col sum.
//_______________________________________

#include <iostream>
#include <cstdlib>    //for random number
#include <iomanip>	  //for stew()
#include <string>	  // printf format

using namespace std;

int RandomNumber(int From, int To)
{
	// function to generate a random number.
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

void FillMatrixWithRandomNumbers(int MatrixArray[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short y = 0; y < Cols; y++)
		{
			MatrixArray[i][y] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int MatrixArray[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		cout << "\t";
		for (short y = 0; y < Cols; y++)
		{
			cout << setw(3) << MatrixArray[i][y] << "\t";
		}
		cout << endl;
	}
}

int ColSum(int array[3][3], short RowNumber, short Cols)
{
	int sum = 0;
	for (short j = 0; j < RowNumber; j++)
	{
		sum += array[j][Cols];
	}
	return sum;
}

void PrintEachColSum(int array[3][3], short RowNumber, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		printf("\n\t col %d sum = %d", i + 1, ColSum(array, RowNumber, i));
	}
	cout << endl;
}



int main()
{
	//  seeds the random number generator in c++ , called only once (in main).
	srand((unsigned)time(NULL));

	int Array[3][3];

	FillMatrixWithRandomNumbers(Array, 3, 3);

	cout << "  the following is a 3*3 randome matrix : \n" << endl;
	PrintMatrix(Array, 3, 3);

	cout << "\n  the following are the sum of  each col in the matrix " << endl;
	PrintEachColSum(Array, 3, 3);
	return 0;
}

