#include "all.h"

void main()
{
	while (true)
	{
		int number;

		cout << "Ȯ���� ���� ��ȣ�� �Է��ϼ���. (2 ~ 6) : " << endl;
		cout << "�����Ϸ��� 1���� �Է��ϼ���." << endl;
		cin >> number;

		if (number == 1)   // 이때 if문 보다 switch문 을쓰는게 나음.
			break;
		}
		else if (number == 2)
		{
			num2();
			cout << "\n" << endl;
		}
		else if (number == 3)
		{
			num3();
			cout << "\n" << endl;
		}
		else if (number == 4)
		{
			num4();
			cout << "\n" << endl;
		}
		else if (number == 5)
		{
			num5();
			cout << "\n" << endl;
		}
		else if (number == 6)
		{
			num6();
			cout << "\n" << endl;
		}
		else
		{
			cout << "�ùٸ� ���� �ƴմϴ�." << endl;
			cin.clear();  // ���� �÷��׸� ������ ���� cin�� �ִ� clear �Լ��� ����
			cin.ignore(INT_MAX, '\n');
			cout << "\n" << endl;
		}
	}
	
}
