#include "all.h"


void num1_3()
{
	int a[9];

	cout << "������ ���� �Է��ϼ���.";

	int number;
	cin >> number;

	������(a, number);

	cout << "����� ������ �Է��ϼ��� (1 ~ 9)." << endl;
	int num;
	cin >> num;
	cout << number << "���� " << num << "��° ���� : " << a[num] << "�Դϴ�.";

	cin >> number;
}

void ������(int a[], int number)
{
	for (int i = 0; i <= 8; i++)
	{		
		cout << number * (i + 1);
		a[i] = number * i;
		if (i != 8)
			cout << ", ";
	}
	cout << endl;
}