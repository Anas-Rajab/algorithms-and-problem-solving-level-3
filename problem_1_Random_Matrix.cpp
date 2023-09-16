//write a program to fill a 3*3 matrix . 
//_______________________________________

#include <iostream>
#include <cstdlib>    //for random number
#include <iomanip>	  //for stew()
#include <string>

using namespace std;

int RandomNumber(int From, int To)
{
	// function to generate a random number.
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

void FillMatrixWithRandomNumbers(int Array[3][3],short Rows,short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short y = 0; y < Cols; y++)
		{
			Array[i][y] = RandomNumber(1, 100);
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
			cout <<setw(3)<< Array[i][y] << "\t";
		};
		cout << endl;
	};
}


int main()
{
	//  seeds the random number generator in c++ , called only once (in main).
	srand((unsigned)time(NULL));

	int Array[3][3];

	FillMatrixWithRandomNumbers(Array, 3, 3);

	cout << "  the following is a 3*3 randome matrex : \n" << endl;
	PrintMatrix(Array, 3, 3);

	return 0;
}

