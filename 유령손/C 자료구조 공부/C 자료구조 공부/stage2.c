#include "h.h"
#include<stdlib.h>

/*
���� 1
������ ���� ����ü�� �̿��Ͽ� �л� ��Ϻ� �ڷḦ �����Ϸ��� �մϴ�.
�Ʒ� ����ü�� �迭�� �̿��Ͽ� 5���� ����, ����, ���� ���� �� ����� ���ϴ� ���α׷��� �ۼ��غ��ÿ�.

struct student_score{
	char	name[30];
	float	korean;
	float	english;
	float	math;
	float	avg;
};
................
stryct student *ptr_student_new = (struct student*)malloc(sizeof(struct student) * 5);
*/
void stage2_No1()
{
	student_score man1 = { "lee", 81, 79, 99, (81 + 79 + 99) / 3 };
	student_score man2 = { "kim", 80, 82, 78, (80 + 82 + 78) / 3 };
	student_score man3 = { "Park", 79, 85, 75, (79 + 85 + 75) / 3 };
	student_score man4 = { "hong", 75, 87, 82, (75 + 87 + 82) / 3 };
	student_score man5 = { "jung", 90, 89, 65, (90 + 89 + 65) / 3 };

	printf("**********************************************************************\n");
	printf("�̸�\t\t����\t\t����\t\t����\t\t���\t\n");
	printf("----------------------------------------------------------------------\n");
	print_student_score(&man1);
	printf("----------------------------------------------------------------------\n");
	print_student_score(&man2);
	printf("----------------------------------------------------------------------\n");
	print_student_score(&man3);
	printf("----------------------------------------------------------------------\n");
	print_student_score(&man4);
	printf("----------------------------------------------------------------------\n");
	print_student_score(&man5);
	printf("**********************************************************************\n");

}

void print_student_score(student_score* man)
{
	printf(man->name);
	printf("\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\n", man->korean, man->english, man->math, man->avg);
}

/*
���� 2
������ ���� �Ǽ�(float) 2����(4X4) �迭�� �����ϰ�, �� ����� ȭ�鿡 ����غ�����.
	
	8.1		7		4		2
	6.5		8.2		2		7
	10		5		2.5		7
	7		2		3		2.3
*/
void stage2_No2()
{
	float �迭2����[4][4] =
	{
		{ 8.1, 7, 4, 2 },
		{ 6.5, 8.2, 2, 7 },
		{ 10, 5, 2.5, 7 },
		{ 7, 2, 3, 2.3 }
	};

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%.2f\t\t", �迭2����[i][j]);
		}
		printf("\n");
	}
}

/*
����3
���� ������ ��� ����� ���غ�����.

1) �Ʒ� �ҽ��� �������� ���, ���� int_value�� ���� ���Դϱ�?

int int_value = 20;
int *ptr_int = &int_value;
*prt_int = 10;

2) �Ʒ� �ҽ��� �������� ���, ���� int_arrary[1]�� ���� ���Դϱ�?

int int_array[10] = {0,};
int *ptr_int = &int_value;
*ptr_int = 10;
*(ptr_int + 1) = 12;
*(ptr_int + 2) = 14;

*/
void stage2_No3_1()
{
	int int_value = 20;
	printf("int int_value = 20\n");
	printf("%d\n", int_value);

	int *ptr_int = &int_value;
	printf("int *ptr_int = &int_value\n");
	printf("%d\n", int_value);

	*ptr_int = 10;
	printf("*ptr_int = 10\n");
	printf("%d\n", int_value);
}

void stage2_No3_2()
{
	int int_array[10] = { 0, };
	int *ptr_int = &int_array;
	*ptr_int = 10;
	*(ptr_int + 1) = 12;
	*(ptr_int + 2) = 14;
	printf("%d", int_array[1]);
}

/*
����4
���� �ҽ��� ������ ����� ����Ǵ� �������� ����(����)�� �׸����� �׷�������.

int int_value_A = 100;
int int_value_B = 200;
int *ptr_int1 = &int_value_A;
int *ptr_int2 = &int_value_B;

*ptr_int1 = *ptr_int2;
ptr_int1 = ptr_int2;

*/
void stage2_No4()
{
	int int_value_A = 100;
	int int_value_B = 200;
	int *ptr_int1 = &int_value_A;
	int *ptr_int2 = &int_value_B;

	printf("int_value_A\tint_value_B\t*ptr_int1\t*ptr_int2\n");
	printf("%d\t\t%d\t\t%d\t\t%d\t\t\n", int_value_A, int_value_B, *ptr_int1, *ptr_int2);

	*ptr_int1 = *ptr_int2;
	printf("int_value_A\tint_value_B\t*ptr_int1\t*ptr_int2\n");
	printf("%d\t\t%d\t\t%d\t\t%d\t\t\n", int_value_A, int_value_B, *ptr_int1, *ptr_int2);
	ptr_int1 = ptr_int2;
	printf("int_value_A\tint_value_B\t*ptr_int1\t*ptr_int2\n");
	printf("%d\t\t%d\t\t%d\t\t%d\t\t\n", int_value_A, int_value_B, *ptr_int1, *ptr_int2);
}

/*
����5
������ ���� �ҽ��� �ֽ��ϴ�.
�Ʒ� �ҽ��� �����Ͽ��� �� ȭ�鿡 ��µǴ� ���� �����Դϱ�?
��, �ҽ� ������ ������ *(*(pptr_int_array + 3) + 2)�� �ش��ϴ� ���� ���Դϱ�?

	int i = 0, j = 0, value = 0;
	int row = 4, col = 5;

	int **pptr_int_array = (int **) malloc(sizeof(int*) * row);
	for(i = 0; i < row; i++)
	{
		pptr_int_array[i] = (int *) malloc(sizeof(int) * col);
	}
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			value++;
			pptr_int_array[i][j] = value;
		}
	}

	printf("%d\n", *(*(pptr_int_array + 3) + 2));

*/
void stage2_No5()
{
	int i = 0, j = 0, value = 0;
	int row = 4, col = 5;

	int **pptr_int_array = (int **)malloc(sizeof(int*) * row);
	for (i = 0; i < row; i++)
	{
		pptr_int_array[i] = (int *)malloc(sizeof(int) * col);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			value++;
			pptr_int_array[i][j] = value;
		}
	}

	printf("%d\n", *(*(pptr_int_array + 3) + 2));
}