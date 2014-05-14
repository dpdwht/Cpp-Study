#include "h.h"
#include<stdlib.h>

/*
문제 1
다음과 같이 구조체를 이용하여 학생 기록부 자료를 저장하려고 합니다.
아래 구조체와 배열을 이용하여 5명의 국어, 영어, 수학 점수 및 평균을 구하는 프로그램을 작성해보시요.

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
	printf("이름\t\t국어\t\t영어\t\t수학\t\t평균\t\n");
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
문제 2
다음과 같은 실수(float) 2차원(4X4) 배열을 생성하고, 그 결과를 화면에 출력해보세요.
	
	8.1		7		4		2
	6.5		8.2		2		7
	10		5		2.5		7
	7		2		3		2.3
*/
void stage2_No2()
{
	float 배열2차원[4][4] =
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
			printf("%.2f\t\t", 배열2차원[i][j]);
		}
		printf("\n");
	}
}

/*
문제3
다음 각각의 경우 결과를 구해보세요.

1) 아래 소스를 실행했을 경우, 변수 int_value의 값은 얼마입니까?

int int_value = 20;
int *ptr_int = &int_value;
*prt_int = 10;

2) 아래 소스를 실행했을 경우, 변수 int_arrary[1]의 값은 얼마입니까?

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
문제4
다음 소스를 수행한 결과로 예상되는 변수들의 구조(관계)를 그림으로 그려보세요.

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
문제5
다음과 같은 소스가 있습니다.
아래 소스를 실행하였을 때 화면에 출력되는 값은 무엇입니까?
즉, 소스 마지막 라인의 *(*(pptr_int_array + 3) + 2)에 해당하는 값은 얼마입니까?

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