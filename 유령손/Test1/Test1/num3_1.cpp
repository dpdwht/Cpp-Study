#include "all.h"

struct student
{
	char name[10];
	char age[5];
};

void num3_1() //동적할당은 아직 할줄 모르겟다.
{
	student pack;
	cout << "이름을 입력하세요 : ";
	cin >> pack.name;
	cout << "나이를 입력하세요 : ";
	cin >> pack.age;
	
	cout << "이름 : " << pack.name << endl;
	cout << "나이 : " << pack.age << endl;
	
	cin >> pack.name;
}

