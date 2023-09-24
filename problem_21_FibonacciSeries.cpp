//   write a program to print fibonacc series of 10
//_______________________________________

#include <iostream>
#include <iomanip>	  
#include <string>

using namespace std;


void PrintFibonaccSeriesOf(int Number)
{
	int previous1 = 0, previous2 = 1, sum = 0;

	for (int i = 0; i < Number; i++)
	{
		sum = previous1 + previous2;
		previous2 = previous1;
		previous1 = sum;
		cout << sum << "   ";
	}
}


int main()
{
	PrintFibonaccSeriesOf(10);


	return 0;
}

