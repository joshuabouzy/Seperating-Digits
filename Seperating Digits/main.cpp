#include <iostream>
#include <math.h>
#include <string>
#include "QuotientCalculator.h"
#include "RemainderCalculator.h"

int main()
{
	int a = 0, length = 0;

	std::cout << "Enter # \n";
	std::cin >> a;

	length = std::to_string(a).length();

	for (int counter = length - 1; counter >= 0; counter--)
	{
		int base = pow(10, counter);
		std::cout << quotient(a, base) << " ";
		a = remainder(a, base);
	}

	system("pause");

	return 0;

}