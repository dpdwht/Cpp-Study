#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arraylist.h"

//배열 리스트 추가

ArrayList* createArrayList(int maxElementCount)
{
	ArrayList *pReturn = NULL;
	int i = 0;

	if (maxElementCount > 0)				//입력 파라미터 유효성 점검
	{
		pReturn = (ArrayList *)malloc(sizeof(ArrayList));			//메모리 할당

		if (pReturn != NULL)
		{
			pReturn->maxElementCount = maxElementCount;
			pReturn->currentElementCount = 0;
			pReturn->pElement = NULL;
		}

		else
		{
			printf("오류, 메모리할당 createArrayList()\n");
			return NULL;
		}
	}
	else
	{
		printf("오류, 최대 원소 개수는 0이상이여야 합니다.\n");
	}

	pReturn->pElement = (ArrayListNode *)malloc(sizeof(ArrayListNode)* maxElementCount);

	if (pReturn->pElement == NULL)
	{
		printf("오류, 2번째 메모리할당 createArrayList()\n");
		free(pReturn);
		return NULL;
	}
	memset(pReturn->pElement, 0, sizeof(ArrayListNode) * maxElementCount);

	return pReturn;
}

//원소 추가

int addALElement(ArrayList* pList, int position, ArrayListNode element)
{
	int ret = FALSE;
	int i = 0;
	//입력 파라미터에 대한 유효성 점검
	if (pList != NULL)			//메모리 NULL 여부
	{
		if (isArrayListFull(pList) != TRUE)		//배열에 새로운 원소 추가 가능 여부
		{
			if (position >= 0 && position <= pList->currentElementCount)		//추가하려는 위치의 인덱스
			{
				//기존 원소들을 오른쪽으로 한 칸씩 이동시키기
				for (i = pList->currentElementCount - 1; i >= position; i--)
				{
					pList->pElement[i + 1] = pList->pElement[i];
				}
				//새로운 원소 추가(값 대입)				
				pList->pElement[position] = element;

				pList->currentElementCount++;

				ret = TRUE;
			}
			else
			{
				printf("오류, 위치 인덱스 - [%d] 범위 초과, addALElement()\n", position);
			}
		}
		else
		{
			printf("오류, 리스트 용량 초과 - [%d]/[%d]\n", position, pList->maxElementCount);
		}
	}

	return ret;
}

//원소 제거

int removeALElement(ArrayList* pList, int position)
{
	int ret = FALSE;
	int i = 0;
	//입력 파라미터에 대한 유효성 점검
	if (pList != NULL)			//메모리 NULL 여부
	{
		if (position >= 0 && position < pList->currentElementCount)				//제거하려는 이치의 인덱스
		{
			//기존 원소들을 왼쪽으로 한칸씩 이동
			for (i = position; i < pList->currentElementCount - 1;i++)
			{
				pList->pElement[i] = pList->pElement[i + 1];
			}

			pList->currentElementCount--;
			ret = TRUE;
		}
		else
		{
			printf("오류, 위치 인덱스 - [%d] 범위 초과, removeALElement()\n", position);
		}
	}
	return ret;
}

//리스트 원소 반환과 리스트 순화

ArrayListNode* getALElement(ArrayList* pList, int position)
{
	ArrayListNode* pReturn = NULL;
	//입력 파라미터에 대한 유효성 점검
	if (pList != NULL)			//메모리 NULL 여부
	{
		if (position >= 0 && position < getArrayListLength(pList))			//제거하려는 위치의 인덱스
		{
			pReturn = &(pList->pElement[position]);
		}
		else
		{
			printf("오류, 위치 인덱스 - [%d] 범위 초과, getALElement()\n", position);
		}
	}
	return pReturn;
}

void displayArrayList(ArrayList* pList)
{
	int i = 0;
	if (pList != NULL)
	{
		printf("최대 원소 개수 : %d\n", pList->maxElementCount);
		printf("현재 원소 개수 : %d\n", pList->currentElementCount);
		//현제 저장된 원소의 값을 출력
		for (i = 0; i < pList->currentElementCount; i++)
		{
			printf("[%d], %d\n", i, getALElement(pList, i)->data);
		}


		for (i = pList->currentElementCount; i < pList->maxElementCount; i++)
		{
			printf("[%d], Empty\n", i);
		}
	}
	else
	{
		printf("ArryList is NULL");
	}
}

//기타

int isArrayListFull(ArrayList* pList)
{
	int ret = FALSE;

	if (pList != NULL)
	{
		if (pList->currentElementCount == pList->maxElementCount)
		{
			ret = TRUE;
		}
	}
	return ret;
}

int getArrayListLength(ArrayList* pList)
{
	int ret = 0;

	if (pList != NULL)
	{
		ret = pList->currentElementCount;
	}
	return ret;
}

void deleteArrayList(ArrayList* pList)
{
	int i = 0;
	if (pList != NULL)
	{
		free(pList->pElement);
		free(pList);
	}
}

int addAlelementFirest(ArrayList* pList, ArrayListNode element)
{
	int position = 0;
	return addALElement(pList, position, element);
}

int addALElementLast(ArrayList* pList, ArrayListNode element)
{
	int ret = FALSE;
	int position = 0;
	if (pList != NULL)
	{
		position = getArrayListLength(pList);
		ret = addALElement(pList, position, element);
	}
	return ret;
}
