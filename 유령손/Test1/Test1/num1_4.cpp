#include "all.h"



void num1_4()
{
	char test[10];
	int numsize = sizeof(test) / sizeof(char);
	int number;
	cout << "�Է��� 10���� �ܾ �Է��ϼ���." << endl;
	cin >> test;
	cout << "������ �ڸ����� �Է��ϼ���." << endl;
	cin >> number;
	����(test, number);
	num1_4output(test, numsize);
	cin >> number;


}

void ����(char test[], int number)
{
	cout << "������ ���� �Է��ϼ���." << endl;
	char ��;
	cin >> ��;
	test[number] = ��;
}


void num1_4output(char test[], int numsize)
{
	for (int i = 0; i <= numsize - 1; i++)
	{
		cout << test[i];
	}
	cout << endl;
}