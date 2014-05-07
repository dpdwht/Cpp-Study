#include "all.h"


void num1_2()
{
	char letter;

	cout << "글자 한개를 입력 하세요 : ";

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