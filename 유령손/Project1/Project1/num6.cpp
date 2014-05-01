#include "all.h"

void num6()
{
	int number1, number2;

	number1 = 10;
	number2 = ++number1;

	cout << "number1 = " << number1 << " number2 = " << number2 << endl;

	number1 = 20;
	number2 = number1++;

	cout << "number1 = " << number1 << " number2 = " << number2 << endl;

	number1 = 30;
	number2 = --number1;

	cout << "number1 = " << number1 << " number2 = " << number2 << endl;

	number1 = 40;
	number2 = number1--;

	cout << "number1 = " << number1 << " number2 = " << number2 << endl;

}