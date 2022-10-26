#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 10								// 배열의 요소 개수 지정 									
#define m 30								// 요소 최대값 지정
#define se 2								// 내림차순 조건값 지정

void choose(int* ran);

void choose(int* ran)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ran[i] = (rand() % m) + 1;			// 정수배열 입력
	}
}

int main(void)
{
	srand(time(NULL));
	int a[n];
	int i;
	int select = 0;

	choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%3d ", a[i]);
	}

	printf("\n\nChoose between 1 to 2 \nascending = 1\ndescending = 2\nEnter: ");
	scanf_s("%d", &select);
	printf("\n");

	if (select == se)						// 내림차순, 오름차순 결정 조건
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] > a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}
	else
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] < a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}

	for (i = 0; i < n; i++)
	{
				printf("%3d", a[i]);				// 정렬값 입력
	}
	return 0;
}