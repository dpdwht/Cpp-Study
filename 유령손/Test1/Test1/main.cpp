#include "all.h"

void main()
{
	int num;
	cout << "�迭������ 1, ������ ������ 2, ����ü ������ 3�� �Է��ϼ���. : ";
	cin >> num;
	while (true)
	{
		if (num == 1)
		{
			cout << "�迭 ���� ��ȣ�� �Է��ϼ��� (1 ~ 4) : ";
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
					cout << "�ùٸ� ���� �ƴմϴ�." << endl;
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			}
		}
		else if (num == 2)
		{
			cout << "������ ���� ��ȣ�� �Է��ϼ���. (1 ~ 2) : ";
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
			cout << "���� ����ü�� �ϳ���." << endl;
			num3_1();
			break;
		}
		else
		{
			cout << "�ùٸ� ���� �ƴմϴ�." << endl;
			
		}
		cin.clear();
		cin.ignore(INT_MAX, '\n');

	}

	
}