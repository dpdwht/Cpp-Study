#include "all.h"

void main()
{
	while (true)
	{
		int number;

		cout << "확인할 문제 번호를 입력하세요. (2 ~ 6) : " << endl;
		cout << "종료하려면 1번을 입력하세요." << endl;
		cin >> number;

		if (number == 1)
		{
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
			cout << "올바른 값이 아닙니다." << endl;
			cin.clear();  // 에러 플래그를 지우기 위해 cin에 있는 clear 함수를 사용
			cin.ignore(INT_MAX, '\n');
			cout << "\n" << endl;
		}
	}
	
}