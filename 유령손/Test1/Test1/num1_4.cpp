#include "all.h"



void num1_4()
{
	char test[10];
	int numsize = sizeof(test) / sizeof(char);
	int number;
	cout << "입력할 10글자 단어를 입력하세요." << endl;
	cin >> test;
	cout << "수정할 자릿수를 입력하세요." << endl;
	cin >> number;
	수정(test, number);
	num1_4output(test, numsize);
	cin >> number;


}

void 수정(char test[], int number)
{
	cout << "변경할 글을 입력하세요." << endl;
	char 변;
	cin >> 변;
	test[number] = 변;
}


void num1_4output(char test[], int numsize)
{
	for (int i = 0; i <= numsize - 1; i++)
	{
		cout << test[i];
	}
	cout << endl;
}