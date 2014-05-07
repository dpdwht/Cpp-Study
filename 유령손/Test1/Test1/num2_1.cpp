#include "all.h"


void num2_1()
{
	int num1 = 10, num2 = 40;
	int *n1 = &num1;
	int *n2 = &num2;
	cout << "처음 값 : *n1 = " << *n1 << ", *n2 : " << *n2 << endl;
	swap(num1, num2);
	cout << "변경 값 : *n1 = " << *n1 << ", *n2 : " << *n2 << endl;
	cin >> num1;
}

void pointswap(int *n1, int *n2)
{
	int tep;

	tep = *n1;
	*n1 = *n2;
	*n2 = tep;
}