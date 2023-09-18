//write a program to fill a 3*3 matrix , with order numbers .
//_______________________________________

#include <iostream>
#include <iomanip>	  //for stew()
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

void PrintMatrix(int Array[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << "\t";
		for (short y = 0; y < Cols; y++)
		{
			cout << setw(3) << Array[i][y] << "\t";
		};
		cout << endl;
	};
}


int main()
{
	int Array[3][3];
	FillMatrixWithOrderedNumbers(Array, 3, 3);

	cout << "  the following is a 3 * 3 ordered matrix : \n" << endl;
	PrintMatrix(Array, 3, 3);

	return 0;
}

