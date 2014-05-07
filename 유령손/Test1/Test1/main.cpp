#include "all.h"

void main()
{
	int num;
	cout << "배열문제는 1, 포인터 문제는 2, 구조체 문제는 3을 입력하세요. : ";
	cin >> num;
	while (true)
	{
		if (num == 1)
		{
			cout << "배열 문제 번호를 입력하세요 (1 ~ 4) : ";
			cin >> num;
			while (true)
			{
				if (num == 1)
				{
					num1_1();
					break;
				}
				else if (num == 2)
				{
					num1_2();
					break;
				}
				else if (num == 3)
				{
					num1_3();
					break;
				}
				else if (num == 4)
				{
					num1_4();
					break;
				}
				else
				{
					cout << "올바른 값이 아닙니다." << endl;
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			}
		}
		else if (num == 2)
		{
			cout << "포인터 문제 번호를 입력하세요. (1 ~ 2) : ";
			cin >> num;
			if (num == 1)
			{
				num2_1();
				break;
			}
			else if (num == 2)
			{
				num2_2();
				break;
			}
		}
		else if (num == 3)
		{
			cout << "닥쳐 구조체는 하나다." << endl;
			num3_1();
			break;
		}
		else
		{
			cout << "올바른 값이 아닙니다." << endl;
			
		}
		cin.clear();
		cin.ignore(INT_MAX, '\n');

	}

	
}