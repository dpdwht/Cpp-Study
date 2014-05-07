#include "all.h"


void num1_1()
{
	char test[10];
	int numsize = sizeof(test) / sizeof(char);

	cout << "입력할 10글자 단어를 입력하세요." << endl;
	cin >> test;
	num1_1output(test, numsize);
	cin >> numsize;
}

void num1_1output(char test[], int numsize)
{
	for (int i = numsize - 1; i >= 0; i--)
	{
		cout << test[i];
	}
}