#include "all.h"

struct student
{
	char name[10];
	char age[5];
};

void num3_1() //�����Ҵ��� ���� ���� �𸣰ٴ�.
{
	student pack;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> pack.name;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> pack.age;
	
	cout << "�̸� : " << pack.name << endl;
	cout << "���� : " << pack.age << endl;
	
	cin >> pack.name;
}

