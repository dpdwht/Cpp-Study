#include "all.h"


void num1_2()
{
	char letter;

	cout << "���� �Ѱ��� �Է� �ϼ��� : ";

	cin >> letter;

	if (letter + 32 >= 123)
	{
		cout << (char)(letter - 32) << endl;
	}
	else
	{
		cout << letter << endl;
	}
}