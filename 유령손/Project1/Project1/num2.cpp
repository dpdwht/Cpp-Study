#include "all.h"

void num2()
{
	cout << "홀수와 짝수를 확인할 수를 입력하세요. : ";
	
	int number;

	cin >> number;

	number % 2 ? cout << number << "는 홀수 입니다." : cout << number << "는 짝수 입니다." << endl;

}