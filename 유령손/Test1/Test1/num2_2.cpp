#include "all.h"
#include <time.h>

void num2_2()
{
	int test[10];
	srand((unsigned)time(NULL));
	int num;
	int numsize = sizeof(test) / sizeof(int);
	numberrand(test, numsize);
	print(test, numsize);
	cout << "Á¤·Ä ÈÄ" << endl;
	sort(test, numsize);
	print(test, numsize);
	cin >> num;
}

void numberrand(int test[], int numsize)
{
	for (int i = 0; i <= numsize - 1; i++)
	{
		test[i] = rand() % 500;
	}
}

void print(int test[], int numsize)
{
	for (int i = 0; i <= numsize - 1; i++)
	{
		cout << test[i];
		if (i != 9)
		{
			cout << ", ";
		}
	}
	cout << endl;
}

void sort(int test[], int numsize)
{
	int *pick = 0;
	
	for (int i = 0; i <= numsize - 1; i++)
	{
		pick = &test[i];

		for (int j = i; j <= numsize - 1; j++)
		{
			if (*pick >= test[j])
			{
				pick = &test[j];
			}
		}
		swap(test[i], *pick, test, i, pick);
	}
}

void swap(int number1, int number2, int test[], int i, int *pick)
{
	int tep;

	tep = number1;
	number1 = number2;
	number2 = tep;

	test[i] = number1;
	*pick = number2;
}