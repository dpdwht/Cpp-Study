#include "all.h"

void num4()
{
	int number;
	cout << "절대값을 구할 수를 입력하세요.";
	cin >> number;
	if (number > 0)
	{
		cout << number << endl;
	}
	else
	{
		cout << number * (-1) << endl;
	}

}