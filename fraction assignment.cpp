#include <iostream>
#include "fraction.h"

int getFraNum()
{
	std::cout << "First, give an integer number for the numrator, \n";
	std::cout << "second, give an integer number for the denominator; ";
	int x{};
	std::cin >> x;
	return x;
}
int main()
{
	getFraNum();
	Fraction fraction{ getFraNum() };
	
	std::cout << fraction;



	return 0;
}

