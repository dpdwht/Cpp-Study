#include "all.h"


void num1_1()
{
	char test[10];
	int numsize = sizeof(test) / sizeof(char);

	cout << "�Է��� 10���� �ܾ �Է��ϼ���." << endl;
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