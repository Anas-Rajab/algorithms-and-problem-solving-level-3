// write a program to fill a 3*3 matrix , with order numbers .
// and print it,then transpose matrix and print it.
//_______________________________________

#include <iostream>
#include <iomanip>	 
#include <string>

using namespace std;

void FillMatrixWithOrderedNumbers(int Array[3][3], short Rows, short Cols)
{
	short counter = 1;
	for (short i = 0; i < Rows; i++)
	{
		for (short y = 0; y < Cols; y++)
		{
			Array[i][y] = counter++;
		}
	}
}


void TransposeMatrix(int Array[3][3], int TransposeArr[3][3], short Rows, short Cols)
{
	short swap = 0;
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			TransposeArr[i][j] = Array[j][i];
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
			cout << setw(3) << Array[i][y] << "\t";
		}

		cout << endl;
	}
}


int main()
{
	int Array[3][3];	int TransposeArray[3][3];
	FillMatrixWithOrderedNumbers(Array, 3, 3);

	cout << "  the following is a 3 * 3 ordered matrix : \n" << endl;
	PrintMatrix(Array, 3, 3);


	cout << "\n  the following is a 3 * 3 transpose matrix : \n" << endl;
	TransposeMatrix(Array, TransposeArray, 3, 3);
	PrintMatrix(TransposeArray, 3, 3);

	return 0;
}

