//  write a program to count given number in 3*3 matrixes , print them.
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

int ReadNumber()
{
	int Number = 0;

	cout << "\n  Enter number to count in matrix ? : ";
	cin >> Number;

	while (cin.fail())
	{
		// user didnt insert number:
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid number ,enter avalid one : " << endl;
		cin >> Number;
	}
	return Number;
}

int CountNumberInMatrix(int Number,int Matrix[3][3], short Rows, short Cols)
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


int main()
{
	//  seeds the random number generator in c++ , called only once (in main).
	srand((unsigned)time(NULL));

	int matrix1[3][3];

	FillMatrixWithRandomNumbers(matrix1, 3, 3);
	cout << "  matrix 1 : \n" << endl;
	PrintMatrix(matrix1, 3, 3);

	int NumberToCount = ReadNumber();
	int NumberCount = CountNumberInMatrix(NumberToCount, matrix1, 3, 3);
	printf("Number [%d] count in matrix is : [%d] ", NumberToCount, NumberCount);
	
	system("pause>0");
}

