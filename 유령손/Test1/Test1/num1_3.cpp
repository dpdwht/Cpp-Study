#include "all.h"


void num1_3()
{
	int a[9];

	cout << "저장할 단을 입력하세요.";

	int number;
	cin >> number;

	구구단(a, number);

	cout << "출력할 번지를 입력하세요 (1 ~ 9)." << endl;
	int num;
	cin >> num;
	cout << number << "단의 " << num << "번째 수는 : " << a[num] << "입니다.";

	cin >> number;
}

void 구구단(int a[], int number)
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