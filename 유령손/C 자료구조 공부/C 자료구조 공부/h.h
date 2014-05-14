#pragma once
#include <stdio.h>

typedef struct student_score
{
	char name[30];
	float korean;
	float english;
	float math;
	float avg;
}student_score;

void stage2_No1();
void print_student_score(student_score* man);
void stage2_No2();
void stage2_No3_1();
void stage2_No3_2();
void stage2_No4();
void stage2_No5();