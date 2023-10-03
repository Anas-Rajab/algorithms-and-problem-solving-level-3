//   write a program to print fibonacci series of 10
//		using Recursion.
//_______________________________________

#include <iostream>
#include <iomanip>	  
#include <string>

using namespace std;

void PrintFibonacciSeriesUsingRecursion(int Number, int previous1, int previous2)
{
	int FibonacciNumber = 0;
	if (Number > 0)
	{
		FibonacciNumber = previous1 + previous2;
		previous2 = previous1;
		previous1 = FibonacciNumber;
		cout << FibonacciNumber << "    ";

		PrintFibonacciSeriesUsingRecursion(Number - 1, previous1, previous2);
	}


}


int main()
{
	PrintFibonacciSeriesUsingRecursion(10,0,1);


	return 0;
}

